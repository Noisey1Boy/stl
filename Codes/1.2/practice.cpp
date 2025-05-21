#include<bits/stdc++.h>
using namespace std;

int main(){

    list<string> words1;
    list<string> words2;
    list<string> common_words;

    string s1 = {"data is the new oil for digital economy"};
    string s2 = {"data is a new oil"};

    stringstream a1 (s1);
    string w1;

    stringstream a2 (s2);
    string w2;

    while(a1 >> w1){
        words1.push_back(w1);
    }

    while(a2 >> w2){
        words2.push_back(w2);
    }

    words1.sort();
    words2.sort();

    set_intersection(words1.begin(),words1.end(),words2.begin(),words2.end(),back_inserter(common_words));

    words1.merge(words2);
    words1.unique();
    common_words.sort();
    
    cout<<(double)common_words.size() / words1.size();

return 0;

}
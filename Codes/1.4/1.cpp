#include<bits/stdc++.h>
using namespace std;

int main(){

    set<string> words1;
    set<string> words2;
    set<string> common_words;
    set<string> uni;

    string s1 = {"data is the new oil for digital economy"};
    string s2 = {"data is a new oil"};

    stringstream a1 (s1);
    string w1;

    stringstream a2 (s2);
    string w2;

    while(a1 >> w1){
        words1.insert(w1);
    }

    while(a2 >> w2){
        words2.insert(w2);
    }

   

    set_intersection(words1.begin(),words1.end(),words2.begin(),words2.end(),inserter(common_words,common_words.begin()));
    set_union(words1.begin(),words1.end(),words2.begin(),words2.end(),inserter(uni,uni.begin()));
    
    cout<<(double)common_words.size() / uni.size();

return 0;

}
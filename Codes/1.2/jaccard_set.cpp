#include<iostream>
#include<sstream>
#include<set>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string doc1 = "data is the new oil of the digital world";
    string doc2 = "data is a new oil";
    set<string> common;
    set<string> mer;
    set<string> l1;
    set<string> l2;

    stringstream ss1(doc1);
    string word1;
    while (ss1 >> word1)
    {
        l1.insert(word1);
    }
    
    stringstream ss2(doc2);
    string word2;
    while (ss2 >> word2)
    {
        l2.insert(word2);
    }

    set_intersection(l1.begin(),l1.end(),
                     l2.begin(),l2.end(),
                     back_inserter(common));

    // merge(l1.begin(),l1.end(),
    //       l2.begin(),l2.end(),
    //       back_inserter(mer));

    //l1.merge(l2);

    l1.insert(l2.begin(),l2.end());

    cout<< "jaccard simililarity: "<< <double>(common.size())/l1.size();

    return 0;
}
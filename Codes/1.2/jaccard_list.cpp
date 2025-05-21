#include<iostream>
#include<sstream>
#include<string>
#include<list>
#include<algorithm>
using namespace std;

int main(){

    string doc1 = "data is the new oil of the digital world";
    string doc2 = "data is a new oil";
    list<string> common;
    list<string> unique;
    list<string> l1;
    list<string> l2;

    stringstream ss1(doc1);
    string word1;
    while (ss1 >> word1)
    {
        l1.push_back(word1);
    }
    l1.sort();
    
    stringstream ss2(doc2);
    string word2;
    while (ss2 >> word2)
    {
        l2.push_back(word2);
    }
    l2.sort();

    set_intersection(l1.begin(),l1.end(),
                     l2.begin(),l2.end(),
                     back_inserter(common));

    // l1.merge(l2);
    // l1.unique();

    set_union(l1.begin(),l1.end(),
                     l2.begin(),l2.end(),
                     inserter(unique,unique.begin()));

    cout<< "jaccard simililarity: "<< (double)common.size()/unique.size();

    
}
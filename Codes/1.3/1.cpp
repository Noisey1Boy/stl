#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "mahim ifty omi";
    vector <string> v;

    stringstream ss(s);
    string word;

    while(ss >> word){
        v.push_back(word);
    }
    for(auto it = v.rbegin();it!=v.rend();it++)
    cout<<*(it)<<" ";
}
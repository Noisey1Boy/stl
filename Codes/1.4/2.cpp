#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "learning to code is like learning to innovate and create";
    map<string, int> mp;

    stringstream ss(s);
    string word;

    while(ss >> word){
        if( mp.find(word) != mp.end()){
            mp[word]++;
        }
        else{
            mp[word]++;
        }
    }
    for(auto p : mp){
        cout<<p.first<<" "<<p.second<<endl;
    }
}
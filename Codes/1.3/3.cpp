#include<iostream>
#include<string>
#include<vector>
using namespace std;

auto check(string s1,string s2){

    vector<char> st1;
    vector<char> st2;

    for (auto  i : s1)
    {
       if(i == '#')
            continue;
        else
            st1.push_back(i);
    }
    string result1;
    // while(!st1.empty()){
    //     result1 = st1.top() + result1;
    //     st1.pop();
    // }

    for (auto  i : s2)
    {
       if(i == '#')
            continue;
        else
            st2.push_back(i);
    }
    string result2;
    // while(!st2.empty()){
    //     result2 = st2.top() + result2;
    //     st2.pop();
    // }

    return cout<<((st1 == st2) ? "true" : "false");
}

int main(){

    string s1 = "geee#e#ks";
    string s2 = "gee#e#e#ks";
    
    check(s1,s2);
}
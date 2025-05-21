#include<iostream>
#include<string>
#include<list>
#include<algorithm>

using namespace std;

int main(){

    string s1 = "winkler";
    string s2 = "welfare";
    list<char> m;
    list<char> out;
    list<char> v1;
    list<char> v2;
    
    for(char c: s1){
        v1.push_back(c);
    }
    
    for(char c: s2){
        v2.push_back(c);
    }




    // v1.sort();
    // v2.sort();
    set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),back_inserter(m));


    for(char c: m){
        cout<<c;
    }

}
#include<bits/stdc++.h>
using namespace std;

int main(){

    map<char,int> m1 = {{'A',10},{'B',20},{'C',30},{'D',15}};
    map<char,int> m2 = {{'K',10},{'B',20},{'B',50},{'D',15}};

    for(auto p : m1){
        if(p.first() == m2.end())
            cout<<p.first;
    }





}
#include<iostream>
#include<map>
#include<fstream>
#include<string>
using namespace std;

int main(){

    ifstream file("D:\\Codes\\class\\bm.txt");
    string uid,balance1;
    map<string,int> m;

    while(file>>uid>>balance1){

        int balance = stoi(balance1);
        if(m.find(uid) != m.end()){
            m[uid] += balance;
        }
        else
            m[uid] = balance;
    }

    for(auto p: m)
    cout<<p.first<<p.second<<endl;



}
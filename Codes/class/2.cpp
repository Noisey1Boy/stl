#include<iostream>
#include<sstream>
#include<fstream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int main(){
    
    ifstream file("D:\\Codes\\class\\bm.txt");
    ifstream file1("D:\\Codes\\class\\bn.txt");
    string line;
    map<string,int> s,s1,common;
    if(file.is_open() && file1.is_open())
    {
       while(getline(file,line)){
        stringstream ss(line);
        string uid, balance;
        ss >> uid >> balance;
        s[uid] = stoi(balance);
       } 

       while(getline(file1,line)){
        stringstream ss(line);
        string uid, balance;
        ss >> uid >> balance;
        s1[uid] = stoi(balance);
       } 
    
      // if(s1.size()s.size()){
       for(auto it =s1.begin(); it != s1.end();it++){
        for(auto i =s.begin(); i != s.end();i++){
            if(it->first == i->first)
                cout<<it->first;
        }
       }
    }
    }
    

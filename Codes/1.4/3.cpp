#include<iostream>
#include<fstream>
#include<string>
#include<map>
using namespace std;

int main(){

    ifstream ofile("D:\\Codes\\1.4\\oldmast.txt");
    ifstream tfile("D:\\Codes\\1.4\\trans.txt");

    if(!tfile || !ofile){
        cout<<"error"<<endl;
        return 1;
    }

    string acc;
    double balance;
    map<string,double> accd;

    while(ofile >> acc >> balance){
        accd[acc] = accd[acc] + balance;
    }

    string acc1;
    double balance1;
    map<string,double> accd1;

    while(tfile >> acc1 >> balance1){
        if(accd.find(acc1) != accd.end()){
            accd[acc1] += balance1;
        }
        
        else
            accd1[acc1] = accd1[acc1] + balance1;
    }

    fstream file;
    file.open("newmast.txt",ios::out);

    if(file.is_open()){
        for(auto p : accd){
            file<<p.first<< " "<<p.second<<endl;
        }
    }

    fstream file1;
    file1.open("log.txt",ios::out);

    if(file1.is_open()){
        for(auto p : accd1){
            file1<<p.first<< " "<<p.second<<endl;
        }
    }

    
}
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    
    string id = "210021213";
    vector<int> vec;

    for(char c: id){
        vec.push_back(c - '0');
    }

    int batch = vec[0]*10 + vec[1];
    int dept_code = vec[3]*10 + vec[4];
    int sec = vec[vec.size() -3];

    string dept;
    switch (dept_code)
    {
    case 01 : dept = "mpe";
        break;
    case 02 : dept = "eee";
        break;
    case 03 : dept = "wei";
        break;
    case 04 : dept = "csei";
        break;
    case 05 : dept = "cse";
        break;
    case 06 : dept = "btm";
        break;
    }

    cout<<"batch :"<<batch<<" department :"<<dept<<" Section: "<<sec;
} 



#include<iostream>
#include<vector>
#include<fstream>
#include<array>
using namespace std;

int main(){
    fstream file;
    file.open("D:\\Codes\\read.txt",ios::in);
    vector<char,int> m;
    array<char,100> uid;//= {'A','B','A','C','D','B','D'};
    array<int,100> balance;//= {10,20,10,30,15,10,20};

    if(file.is_open())
    {
        string line;
        while(getline(file,line)){
            m.emplace_back(line);
        }
        file.close();
    
   

    for(int i = 0; i < sizeof(uid)/sizeof(uid[0]); i++){
        m[uid[i]] += balance[i];
    }

    fstream file1;
    file1.open("D:\\Codes\\write.txt",ios::out);

    if(file1.is_open())
    {
        for(auto p : m){
            file1<<p.first<< " "<<p.second<<endl;
        }
    }


    file1.close();

}
}
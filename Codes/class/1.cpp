#include<iostream>
#include<fstream>
#include<sstream>
#include<map>
#include<vector>
using namespace std;

int main(){
    
    ifstream file("D:\\Codes\\class\\victim.txt");

    string line;
    map<string,int> v;
    while(getline(file,line)){

            stringstream ss(line);
            string name, age, district;

            getline(ss,name,'-');
            getline(ss,age,'-');
            getline(ss,district,'-');

            if(!district.empty()){
                v[district]++;
            }   
        }
       
    
    file.close();

    auto max = v.begin();
    for(auto it = v.begin(); it != v.end();it++){
        if(max->second < it->second)
            max = it;
    }

    cout<<max->first<<" "<<max->second;
    
}
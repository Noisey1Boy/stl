#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include<climits>
#include<map>

using namespace std;

int main(){

    ifstream file("D:\\Codes\\setB\\bookdata.txt");
    if(!file.is_open())
        cerr<<"error opening file";

    map<string,int> m;
    string line;
    while (getline(file,line))
    {
        stringstream ss(line);
        string course,book;
        
        getline(ss,course,'-');
        getline(ss,book,'-');

        if(!line.empty()){
            m[course] = stoi(book);
        }
    }
    file.close();

    auto max = m.begin();
    for(auto it = m.begin(); it != m.end(); it++){
        if(max->second < it->second)
            max = it;
    }
    ofstream file1("output.txt");
    if(file1.is_open())
        file1<<max->first<<'-'<<max->second;
    file1.close();
}
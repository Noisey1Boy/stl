#include<iostream>
#include<fstream>

using namespace std;

int main(){
    fstream file;
    file.open("write.txt",ios::out); //write 

    if(file.is_open())
    {
        file<<"hello world\n";
        file<<"this is second line";
        file.close();
    }

    file.open("write.txt",ios::app);//append
}
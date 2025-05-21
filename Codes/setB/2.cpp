#include<iostream>
#include<string>
using namespace std;

int str(string pass){

    if(pass.length() < 12)
        return -1;

    int up = 0;
    int n = 0;
    int sy = 0;
    for(auto c : pass){
        if(isupper(c))
            up++;
        if(c == '(' || c == ',' || c == ';' || c == '.' || c == '<' || c == '>' || c == ')')
            sy++;
        if(isdigit(c))
            n++;
        }
    
        if(n == 0 && up == 0 && sy == 0 )
        return 0;

    return 1;
    }
    


int main(){

    string passwd;
    cin>>passwd;
    cout<<endl;
    cout<<str(passwd);
    return 0;
}
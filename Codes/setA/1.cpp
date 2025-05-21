#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){

    string s;
    int x=10,y=5;
    cout<<"enter your directions:"<<endl;
    cin>>s;

    for(auto i : s){
        switch (tolower(i))
        {
        case 'u' : y++;
                   break;

        case 'd' : y--;
                   break;
        
        case 'r' : x++;
                   break;
        
        case 'l' : x--;
                   break;
    }

    
    }

    cout<<x<<" "<<y;
    return 0;
}
#include<iostream>
#include<cmath>
#include<set>
using namespace std;

bool isprime(int num){

    if(num == 2)
        return true;

    if(num <= 1 || num % 2 == 0)
        return false;
    else{
        for (int i = 3; i <= sqrt(num); i+=2){
            if(num % i == 0)
                return false;
        }
        
    }

    return true;
}

int main(){

    int num;
    cout<<"enter number: ";
    cin>>num;
    cout<<endl;
    set<int> v;

    for(int i = 3; i < 100; i+=2){
        for(int j = 3; j < 100; j+=2){
            if(isprime(j) && isprime(i))
                v.insert(i*j);
        }
    }


    if(v.find(num) != v.end()){
        cout<<"semi prime";
    }
    else
        cout<<"not semi prime";
    
}
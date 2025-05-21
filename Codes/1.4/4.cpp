#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> d1 = {1,1,1,1,1,0,0};
    vector<int> d2 = {0,0,1,1,0,1,1};

    double dd = 0;
    double d1a = 0;
    double d2a = 0;

    for (int i = 0; i < d1.size(); i++)
    {
        dd += d1[i]*d2[i];
    }

    for(int i : d1)
        d1a += pow(i,2);
    d1a = sqrt(d1a);
        

    for(int i : d2)
        d2a += pow(i,2);
    d2a = sqrt(d2a);

    double s = dd/(d1a*d2a);

    
    cout<<acos(s)*180/3.1416;



} 
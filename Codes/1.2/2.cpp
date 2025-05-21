#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s1 = {"1000000000"};
    string s2 = {"0000001001"};
    double a=0 ,b=0,c=0,d=0;

    for(int i = 0; i < s1.length();i++){
        if(s1[i] == '0' && s2[i] == '0')
            a++;
        else if(s1[i] == '0' && s2[i] == '1')
            b++;
        else if (s1[i] == '1' && s2[i] == '1')
            c++;
        else
            d++;
        
    }
    cout<<(d+a)/(a+b+c+d);

    return 0;

}
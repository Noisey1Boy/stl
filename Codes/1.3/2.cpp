#include<bits/stdc++.h>
using namespace std;

auto rmdup(string s){

    stack<char> st;
    for (auto  i : s)
    {
       if(!st.empty() && st.top() == i)
            st.pop();
        else
            st.push(i);
    }

    string result1;
    while(!st.empty()){
        result1 = st.top() + result1;
        st.pop();
    
    }

    return result1;
}

int main(){

    string st = "azxxuteel";
    rmdup(st);
}

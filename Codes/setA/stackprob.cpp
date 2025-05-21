#include<bits/stdc++.h>

using namespace std;


int main(){
 
    string s = " hello world this is mahim";
    stack<string> st;
   // cout<<"enter text: ";
    //cin>>s;

    stringstream s1 (s);
    string word;
    
    while(s1 >> word){

        st.push(word);

    }
    cout<<"output :"<<endl;


    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    


return 0;

}
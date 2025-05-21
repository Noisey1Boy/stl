#include<iostream>
#include<stack>
#include<queue>


using namespace std;

//last in first out : stack
//first in first out : queue
int main(){

    stack<int> st;
    stack<int> s;

    queue<int> q;

    q.front();

    st.push(21);
    st.push(22);
    st.push(23);
    st.push(24);

    int num = 0;
    st.push(num);

    st.pop();
    st.pop();
    st.pop();

    for(;!st.empty();)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
    s.swap(st);


}
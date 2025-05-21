#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v0 = {1,2,3,4,5,6}; // initializing vector and declaring its value
    vector<int> v1(8,10);//creating a vector of size 8 with same elemnts i.e 10
    vector<int> v(v1);//copying vector elements
    v.pop_back();//deleting last elemnts
    v.push_back(34);//adding elemnts

    cout<<v.size()<<' '<<v.capacity();//finding vector capcity and size

    cout<<v.front();//first elemnt
    cout<<v.back();//last elemnt

    v.erase(v.begin());//removing first elemnt
    v1.erase(v1.begin(),v1.begin()+1);//inputs take elemnt index and index of elemnt after the end 
    v0.clear();//removes all elemnts
    cout<<!v.empty();//returns 0 or 1

    cout<<*(v.begin());//prints out the value of first elemnt

    //iterators 
    vector<int>::iterator it;
    for(it = v.begin();it!=v.end();it++)
    cout<<*(it)<<" ";

    for(auto it = v1.rbegin();it != v1.rend();it++)
    cout<<*(it)<<" ";


    //vector pf pairs

    vector<pair<int,int>> ve ={{1,2},{3,4}};

    ve.push_back({5,6});
    ve.emplace_back(7,8);

    for(pair<int,int>p: ve)//auto
    {
        cout<<p.first<<" "<<p.second<<endl;
    }

}
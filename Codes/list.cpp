#include<iostream>
#include<list>
#include<deque>

using namespace std;

int main(){

    //create
    list <int> numbers = {1,2,3};
    list <int> set;

    set.push_back(1);
    set.push_back(2);
    set.push_front(3);
    set.push_front(5);

    //output: 5,3,1,2

    set.pop_back();
    set.pop_front();

    //display
    cout<<"initial list";
    for(int number:numbers)
        cout<<number<<",";

    //add
    numbers.push_front(0);

    //add at end
    numbers.push_back(4);

    //display
    cout<<"end"<<"final list";
    for(int number:numbers)
        cout<<number<<",";

    deque <int> d;//same as list but it is a dynamic array
    cout<<d[0];//value can be accessed randomly not possible with list
    

    return 0;

}
// other function: size erase clear begin end rbegin rend insert front back
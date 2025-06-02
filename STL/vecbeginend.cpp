#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vec = {1 ,2 ,3 , 4, 5} ;

    cout << "vec.begin: "<< *(vec.begin( ))<<endl;
    cout << "vec.end: "<< *(vec.end( ))<<endl; //printed garbage value when i executed
    cout << endl;
    return 0;

}   
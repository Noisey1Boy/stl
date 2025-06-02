#include <iostream>
#include <vector>

using namespace std;
int main ( )
{
    vector <int> v ;
 
    v.push_back (10);
    v.push_back (20);
    v.push_back (30);
    v.pop_back ( );

    /*cout << "Vector contents: ";

    for (int i = 0; i < v.size(); ++i)
     {
        cout << v[i] << " ";
    } */

    for ( int val : v)

    {
        cout << val << " ";
    }


    cout << endl;

    return 0;


}
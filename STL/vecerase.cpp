#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vec = {1 ,2 ,3 , 4, 5} ;

    // vec.erase (vec.begin( )+2 ) ; //1 2 4 5 

    vec.erase ( vec.begin( )+1, vec.begin()+ 3); // vec.begin( )+1 theke start kore vec.begin()+ 3 er ag prjnto erase korbe,like a range,1 4 5

    for ( int val : vec)

    {
        cout << val << " ";
    }
    cout << endl ;
    return 0;
}

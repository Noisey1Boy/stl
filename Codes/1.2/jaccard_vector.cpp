#include<iostream>
#include<sstream>
#include<vector>
#include<string>
#include<iterator>
#include<algorithm>
using namespace std;

int main(){

    string doc1 = "data is the new oil of the digital world";
    string doc2 = "data is a new oil";
    vector<string> common;
    vector<string> unique;


    stringstream ss1(doc1);
    vector<string> v1;
    
    copy(istream_iterator<string>(ss1),
         istream_iterator<string>(),
         back_inserter(v1));
    sort(v1.begin(),v1.end());


    stringstream ss2(doc2);
    vector<string> v2;

    copy(istream_iterator<string>(ss2),
         istream_iterator<string>(),
         back_inserter(v2));
    sort(v2.begin(),v2.end());


    
    set_intersection(v1.begin(),v1.end(),
                     v2.begin(),v2.end(),
                     back_inserter(common));

    
                

    set_symmetric_difference(v1.begin(),v1.end(),
                             v2.begin(),v2.end(),
                             back_inserter(unique));
    

    cout<< "jaccard simililarity: "<< (double)common.size()/(common.size()+unique.size());
    return 0;
}
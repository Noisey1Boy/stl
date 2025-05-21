#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> keys = {76,93,40,47,10,55};
    int s = 7;
    vector<int> result(s,-1);

   for (int i = 0; i < keys.size(); i++){
         int hash = keys[i] % s;

         while(result[hash] != -1 ){
           hash = (hash+1) %s;
         }
         result[hash] = keys[i];
    
    }
    
    
   for(int i : result){
    cout<<i<<endl;
   }

    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     const int SIZE = 7;
//     int table[SIZE];
//     int keys[] = {76, 93, 40, 47, 10, 55};

//     // Initialize the table with -1 (empty)
//     for (int i = 0; i < SIZE; i++)
//         table[i] = -1;

//     // Insert keys using linear probing
//     for (int i = 0; i < 6; i++) {
//         int key = keys[i];
//         int index = key % SIZE;

//         // Linear probing
//         while (table[index] != -1) {
//             index = (index + 1) % SIZE;
//         }

//         table[index] = key;
//     }

//     // Print the final hash table
//     cout << "Hash Table:\n";
//     for (int i = 0; i < SIZE; i++) {
//         if (table[i] != -1)
//             cout << i << ": " << table[i] << endl;
//         else
//             cout << i << ": " << "_" << endl;
//     }

//     return 0;
// }

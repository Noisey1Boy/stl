#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <climits>

using namespace std;

int main() {
    ifstream file("D:\\Codes\\setA\\numbers.txt");
    if (!file.is_open()) {
        cerr << "Error opening file" << endl;
        return 1;
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string token;
        int max_num = INT_MIN;

        while (getline(ss, token, ',')) {
            int num = stoi(token);
            if (num > max_num) {
                max_num = num;
            }
        }

        cout << max_num << endl;
    }

    file.close();
    return 0;
}
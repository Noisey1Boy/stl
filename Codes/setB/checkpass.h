#include<string>
#include<set>
using namespace std;

int check(string pass){

    if(pass.length()< 12)
        return -1;

    bool has_upper = false;
    bool has_lower = false;
    bool has_num = false;
    bool has_char = false;
    
    set<char> sp_char  = {';', '<', '>', '.', ',', '(', ')', ';', ':'};

    for(char c : pass){

        if(isupper(c))
            has_upper = true;
        if(islower(c))
            has_lower = true;
        if(isdigit(c))
            has_num = true;
        if(sp_char.count(c))
            has_char = true;

    }

    if(has_char && has_lower && has_upper && has_char)
        return 1;
    else    
        return -1;

}
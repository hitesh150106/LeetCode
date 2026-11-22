#include <iostream>
#include <vector>
using namespace std;

bool checkString(string s){

    int CountB = 0;

    for(int i=0; i<s.length(); i++){
        if(s[i] == 'b') CountB++;

        if(s[i] == 'a' && CountB > 0) return false;
    }

    return true;
}

int main(){

    string s = "aaabbb";

    if(checkString(s) == 1){
        cout << "Ture";
    } else {
        cout << "False";
    }

    return 0;
}
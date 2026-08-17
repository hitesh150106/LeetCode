#include <iostream>
#include <unordered_map>
using namespace std;

int uniqueString(string s){

    unordered_map<char , int> m;

    for(int ch : s){
        m[ch]++;;
    }

    for(int i=0; i<s.length(); i++){
        if(m[s[i]] == 1) return i;
    }

    return -1;
}

int main(){

    string s = "aabb";

    cout << "My Approach : ";
    cout << uniqueString(s) << endl;

    return 0;
}
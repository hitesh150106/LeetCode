#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool areOccurrencesEqual(string s){

    unordered_map<char , int> m;

    for(char c : s){
        m[c]++;
    }

    bool allEqual = true;
    int firstCount = m.begin()->second;

    for(auto& pair : m){
        int count = pair.second;
        if(count != firstCount){
            allEqual = false;
            break;
        }
    }

    return allEqual;
}

int main(){

    string s = "aaabbb";

    cout << areOccurrencesEqual(s);

    return 0;
}
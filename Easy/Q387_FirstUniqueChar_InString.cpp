#include <iostream>
#include <unordered_map>
using namespace std;

int uniqueString(string s){

    unordered_map<char , int> m;

    for(int ch : s){
        m[ch]++;
    }

    for(int i=0; i<s.length(); i++){
        if(m[s[i]] == 1) return i;
    }

    return -1;
}

// More Optimal
int uniqueString2(string s){

    int count[26] = {0};

    for(char c : s){
        count[c-'a']++;
    }

    for(int i=0; i<s.length(); i++){
        if(count[s[i]-'a'] == 1){
            return i;
        }
    }

    return -1;
}

int main(){

    string s = "aabb";

    cout << "My Approach : ";
    cout << uniqueString(s) << endl;

    cout << "Another Approach : ";
    cout << uniqueString2(s);    

    return 0;
}
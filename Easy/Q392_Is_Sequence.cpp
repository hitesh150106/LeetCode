#include <iostream>
using namespace std;

bool isSequnce(string s , string t){

    if(s.size() == 0) return true;
    if(s.size() > t.size()) return false;

    int j = 0;

    for(int i=0; i<t.size(); i++){
        if(t[i] == s[j]){
            j++;
        }
    }

    if(j == s.size()) return true;
    return false;
}

int main(){

    string s = "abc";
    string t = "asbec";

    cout << isSequnce(s , t);

    return 0;
}
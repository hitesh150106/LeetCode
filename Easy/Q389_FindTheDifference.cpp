#include <iostream>
#include <algorithm>
using namespace std;

char Difference(string s , string t){

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    for(int i=0; i<s.length(); i++){
        if(s[i] != t[i]){
            return t[i];
        }
    }

    return t.back();
}

int main(){

    string s = "abcd";
    string t = "abcde";

    cout << Difference(s , t);

    return 0;
}
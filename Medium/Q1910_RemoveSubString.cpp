#include <iostream>
#include <algorithm>
using namespace std;

string RemoveOccurance(string s , string part){

    while(s.length() > 0 && s.find(part) < s.length()){
        s.erase(s.find(part),part.length());
    }

    return s;

}

int main(){

    string s = "daabcbaabcbc";
    string part = "abc";

    cout << RemoveOccurance(s , part);

    return 0;
}
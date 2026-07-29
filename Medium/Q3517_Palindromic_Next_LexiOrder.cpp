#include <iostream>
#include <algorithm>
using namespace std;

string smallestLexiOrder(string s){

    int n = s.length();
    int mid = n/2;

    sort(s.begin() , s.begin()+mid);

    for(int i=0; i<mid; i++){
        s[n-1-i] = s[i];
    }

    int k = 2;

    while(k >= 0){
       smallestLexiOrder(s);
       k--; 
    }

    return s;
}

int main(){

    string s = "abba";

    cout << smallestLexiOrder(s);

    return 0;
}
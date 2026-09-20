#include <iostream>
using namespace std;

int ReverseDegree(string s){

    int ans = 0;

    for(int i=0; i<s.length(); i++){
        ans += (26 - (s[i] - 'a')) * (i+1);
    }

    return ans;
}

int main(){

    string s = "abc";

    cout << ReverseDegree(s);

    return 0;
}
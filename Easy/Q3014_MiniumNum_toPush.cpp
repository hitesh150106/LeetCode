#include <iostream>
using namespace std;

int MinimumNumPush(string word){
    int push = 0;

    for(int i=0; i<word.length(); i++){
        push += (i/8) + 1;
    }

    return push;
}

int main(){
    
    string word = "abcdefghijklmnop";

    cout << MinimumNumPush(word);

    return 0;
}
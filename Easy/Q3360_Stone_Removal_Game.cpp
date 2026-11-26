#include <iostream>
using namespace std;

bool canAliceWin(int n){

    int stone = 10;
    bool AliceTurn = true;

    while(n >= stone){
        n = n - stone;
        stone--;
        AliceTurn = !AliceTurn;
    }

    return !AliceTurn;
}

int main(){

    int n = 12;

    cout << canAliceWin(n);

    return 0;
}
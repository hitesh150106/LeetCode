#include <iostream>
using namespace std;

bool PowerOfFour(int n){

    if(n <= 0) return false;

    while(n % 4 == 0){
        n = n/4;
    }

    if(n == 1) return true;
    return false;
}

int main(){

    int n = 16;

    cout << PowerOfFour(n);

    return 0;
}
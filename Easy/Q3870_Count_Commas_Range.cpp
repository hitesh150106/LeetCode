#include <iostream>
using namespace std;

int countCommas(int n){

    int count = 0;
    int copy = n;

    while(copy > 0){
        copy /= 10;
        count++;
    }

    if(count < 3) return 0;
    else return n - 999;
}

int main(){

    int n = 1003;

    cout << countCommas(n);

    return 0;
}
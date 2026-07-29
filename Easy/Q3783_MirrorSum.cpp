#include <iostream>
using namespace std;

int MirrorSum(int n){
    int copy = n;
    int rev = 0;

    while(copy > 0){
        int digit = copy % 10;
        rev = rev*10 + digit;
        copy /= 10;
    }

    n = abs(n - rev);
    return n;
}

int main(){
    int n = 25;

    cout << MirrorSum(n);

    return 0;
}
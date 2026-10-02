#include <iostream>
using namespace std;

int subtractProductAndSum(int n){

    int sum = 0;
    int prod = 1;

    while(n > 0){
        int digit = n % 10;
        sum += digit;
        prod *= digit;

        n /= 10;
    }

    return prod - sum;
}

int main(){

    int n = 1234;

    cout << subtractProductAndSum(n);

    return 0;
}
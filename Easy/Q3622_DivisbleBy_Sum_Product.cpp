#include <iostream>
using namespace std;

bool checkDivisibility(int n) {

    int sumCopy = n;
    int prodCopy = n;

    int sum = 0;
    int prod = 1;
        
    while(sumCopy > 0){
        int digit = sumCopy % 10;
        sum += digit;

        sumCopy /= 10;
    }

    while(prodCopy > 0){
        int digit = prodCopy % 10;
        prod *= digit;

        prodCopy /= 10;
    }        

    if(n % (sum + prod) == 0) return true;

    return false;
}

int main(){

    int n = 99;

    cout << checkDivisibility(n);

    return 0;
}
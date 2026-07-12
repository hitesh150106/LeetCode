#include <iostream>
using namespace std;

int AddDigits(int n){
    
    while(n >= 10){
        int sum = 0;

        while(n > 0){
            sum += n % 10;
            n /= 10;
        }

        n = sum;
    }

    return n;
}


// TC : O(1)  , most optimal
int AddDigits(int n){

    if(n == 0) return 0;
    if(n % 9 == 0) return 9;
    return n%9;

}


int main(){

    int n = 38;

    cout << AddDigits(n);

    return 0;
}
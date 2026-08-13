#include <iostream>
using namespace std;

bool powerOfThree(int n){

    if(n <= 0) return false;

    while(n % 3 == 0){
        n = n / 3;
    }

    if(n == 1) return true;

    return false;
}

int main(){

    int n = 27;

    cout << powerOfThree(n);


    return 0;
}
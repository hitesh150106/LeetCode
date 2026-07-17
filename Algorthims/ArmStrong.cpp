#include <iostream>
using namespace std;

bool isArmStrong(int n){
    int copyN = n;
    int sum = 0;

    while(n != 0){
        int dig = n % 10;
        sum += (dig * dig * dig);
        n /= 10;
    }

    return sum == copyN;
}

int main(){

    int n = 153;

    if(isArmStrong(n)){
        cout << "ArmStrong";
    } else {
        cout << "Not an ArmStrong";
    }

    return 0;
}
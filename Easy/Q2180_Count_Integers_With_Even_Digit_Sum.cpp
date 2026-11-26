#include <iostream>
using namespace std;

int countEven(int num){

    int count = 0;

    while(num != 0){
        int sum = 0;
        int copy = num;

        while(copy != 0){
            sum += copy % 10;
            copy /= 10;
        }

        if(sum % 2 == 0) count++;
        num--;
    }

    return count;
}

int main(){

    int n = 30;

    cout << countEven(n);

    return 0;
}
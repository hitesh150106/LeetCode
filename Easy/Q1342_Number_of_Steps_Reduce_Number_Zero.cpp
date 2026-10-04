#include <iostream>
using namespace std;

int numberOfSteps(int num){

    int count = 0;

    while(num > 0){
        if(num % 2 == 0){
            num /= 2;
            count++;
        }
        if(num % 2 != 0){
            num = num-1;
            count++;
        }
    }

    return count;
}

int main(){

    int num = 14;

    cout << numberOfSteps(num);

    return 0;
}
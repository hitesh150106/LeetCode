#include <iostream>
using namespace std;

bool PerfectSquare(int num){

    if(num <= 0) return false;
    if(num == 1) return true;

    for(int i=1; i*i<=num; i++){
        if(i*i == num){
            return true;
        }
    }
    return false;
}

int main(){

    int num = 16;

    cout << PerfectSquare(num);

    return 0;
}

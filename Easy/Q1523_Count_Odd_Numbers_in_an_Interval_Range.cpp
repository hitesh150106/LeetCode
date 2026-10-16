#include <iostream>
#include <vector>
using namespace std;

int countOdds(int low, int high){

    int length = high - low + 1;

    if(length % 2 == 0) return length/2;
    if(low % 2 != 0) return length/2 + 1;

    return length/2;
}

int main(){

    int high = 7;
    int low = 3;

    cout << countOdds(low , high);

    return 0;
}
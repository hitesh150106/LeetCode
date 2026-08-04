#include <iostream>
using namespace std;

bool isBadVersion(int bad){}

int firstBadVersion(int n){

    int st = 1;
    int end = n;

    while(st < end){
        int mid = st + (end-st)/2;

        if(isBadVersion(mid)){
            end = mid;
        } else {
            st = mid+1;
        }
    }
    return st;
}

int main(){

    int n = 5;
    int bad = 4;

    return 0;
}
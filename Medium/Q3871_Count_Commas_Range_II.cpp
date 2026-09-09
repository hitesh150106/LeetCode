#include <iostream>
using namespace std;

int CountCommas(long long n){

    long long result = 0;
    long long commas = 1;

    long long lower = 1000;

    while(lower <= n){

        long long upper = lower*1000 - 1;
        
        if(upper > n) upper = n;

        long long countNumber = upper - lower + 1;
        result += countNumber * commas;

        lower *= 1000;
        commas++;
    }

    return result;
}

int main(){

    long long n = 433234;

    cout << CountCommas(n);

    return 0;
}
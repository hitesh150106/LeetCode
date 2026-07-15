#include <iostream>
#include <vector>
using namespace std;

// Brute Force , TC : O(n^2)

int CountPrimeBrute(int n){

    int count = 0;

    for(int k=2; k<n; k++){
        bool isPrime = true;
        for(int i=2; i*i<=k; i++){
            if(k % i == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime) count++;
    }

    return count;
}

// TC : O( n log logn)  and SC : O(n)

int CountPrime(int n){
    vector<bool> isPrime(n+1 , true);

    int count = 0;

    for(int i=2; i<n; i++){
        if(isPrime[i]){
            count++;

            for(int j=i*2; j<n; j=j+i){
                isPrime[j] = false;
            }
        }
    }
    return count++;
}

int main(){

    int n = 50;

    cout << CountPrime(n) << endl;

    cout << CountPrimeBrute(n);

    return 0;
}
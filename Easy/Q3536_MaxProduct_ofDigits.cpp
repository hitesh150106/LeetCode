#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// O(N)
int AddMaximum(int n){

    vector<int> vec;

    while(n > 0){
        int digit = n % 10;
        vec.push_back(digit);

        n /= 10;
    }

    sort(vec.begin(),vec.end());

    return vec.back() * vec[vec.size()-2];
}

// Better
int AddMaximum2(int n){

    int max1 = 0;
    int max2 = 0;

    while(n > 0){
        int digit = n % 10;

        if(digit >= max1){
            max2 = max1;
            max1 = digit;
        } else if(digit > max2){
            max2 = digit;
        }

        n /= 10;
    }

    return max1 * max2;
}

int main(){
    int n = 31;

    cout << AddMaximum(n);
    cout << endl;
    cout << AddMaximum2(n);

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int digitSum(int x){

    int sum = 0;

    while(x > 0){
        sum += x % 10;
        x /= 10;
    }

    return sum;
}

int minSwap(vector<int> &nums){


}

int main(){



    return 0;
}
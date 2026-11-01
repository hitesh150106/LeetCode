#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findGCD(vector<int>& nums){

    sort(nums.begin() , nums.end());

    int a = nums[0];
    int b = nums.back();

    while(a != 0){
        int rem = a % b;
        b = a;
        a = rem;
    }

    return b;
}

int main(){

    vector<int> nums = {2 , 5 , 6 , 9 , 10};

    cout << findGCD(nums);

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int ThirdMaximum(vector<int> &nums){

    sort(nums.begin(),nums.end());
    nums.erase(unique(nums.begin(),nums.end()),nums.end());

    int n = nums.size();

    if(n == 1) return nums[0];
    else if(n == 2) return nums.back();
    else return nums[n-3];
}

int main(){

    vector<int> nums = {1 , 3 , 2 , 2};

    cout << ThirdMaximum(nums);


    return 0;
}
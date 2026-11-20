#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dominantIndex(vector<int>& nums){

    int n = nums.size();

    int maximum = *max_element(nums.begin() , nums.end());
    int index = max_element(nums.begin() , nums.end()) - nums.begin();

    for(int i=0; i<n; i++){
        nums[i] = nums[i] * 2;
    }

    sort(nums.begin() , nums.end());

    if(maximum >= nums[n-2]) return index;
    else return -1;
    
}

int main(){

    vector<int> nums = {3 , 6 , 1 , 0};

    cout << dominantIndex(nums);

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findFinalValue(vector<int>& nums, int original) {

    sort(nums.begin() , nums.end());

    for(int i=0; i<nums.size(); i++){
        if(nums[i] == original){
            original = original * 2;
        }
    }

    return original;
}

int main(){

    vector<int> nums = {5 , 3 , 6 , 1 , 12};
    int original = 3;

    cout << findFinalValue(nums , original);


    return 0;
}
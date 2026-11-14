#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int smallestEqual(vector<int>& nums){

    int n = nums.size();
    int minimum = INT_MAX;
    int count = 0;

    for(int i=0; i<n; i++){
        if(i % 10 == nums[i]){
            minimum = min(minimum , i);
            count++;
        }
    }

    if(count == 0) return -1;
    return minimum;
}

int main(){

    vector<int> nums = {0 , 1 , 2};

    cout << smallestEqual(nums);

    return 0;
}
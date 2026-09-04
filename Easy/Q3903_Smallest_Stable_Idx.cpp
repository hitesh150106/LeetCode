#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int fisrtStableIndex(vector<int> &nums , int k){

    int n = nums.size();

    for(int i=0; i<n; i++){

        int maximum = INT_MIN;
        int minimum = INT_MAX;

        for(int j=0; j<=i; j++) maximum = max(maximum , nums[j]);
        for(int j=i; j<n; j++) minimum = min(minimum , nums[j]);

        if(maximum - minimum <= k) return i;
    }

    return -1;
}

int main(){

    vector<int> nums = {5 , 0 , 1 , 4};
    int k = 3;

    cout << fisrtStableIndex(nums , k);

    return 0;
}
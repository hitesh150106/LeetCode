#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int minimumDifference(vector<int>& nums, int k){

    sort(nums.begin() , nums.end());

    int n = nums.size();
    int ans = nums[k-1] - nums[0];

    for(int i=1; i<=n-k; i++){
        int diff = nums[n-k+1] - nums[i];
        ans = min(ans , diff);
    }

    return ans;
}

int main(){

    vector<int> nums = {9 , 4 , 1 , 7};
    int k = 2;

    cout << minimumDifference(nums , k);

    return 0;
}
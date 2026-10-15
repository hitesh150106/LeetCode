#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int sumCounts(vector<int>& nums){

    int n = nums.size();
    int ans = 0;

    for(int i=0; i<n; i++){

        unordered_set<int> seen;

        for(int j=i; j<n; j++){
            seen.insert(nums[j]);
            int distintCount = seen.size();
            ans += distintCount * distintCount;
        }
    }

    return ans;
}

int main(){

    vector<int> nums = {1 , 2 , 1};

    cout << sumCounts(nums);

    return 0;
}
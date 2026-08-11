#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

// O(n Logn)
vector<int> findMissingNums(vector<int> &nums){

    vector<int> ans;
    sort(nums.begin(),nums.end());

    for(int i=0; i<nums.size(); i++){
        if(nums[i+1] - nums[i] > 1){
            for(int x=nums[i]+1; x<nums[i+1]; x++){
                ans.push_back(x);
            }
        }
    }
    return ans;
}

int main(){

    vector<int> nums = {1 , 2 , 5 , 4};

    vector<int> result = findMissingNums(nums);

    for(int val : result){
        cout << val << " ";
    }

    return 0;
}
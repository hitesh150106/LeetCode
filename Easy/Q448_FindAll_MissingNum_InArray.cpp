#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> allMissingNum(vector<int> &nums){

    int n = nums.size();

    sort(nums.begin(),nums.end());
    nums.erase(unique(nums.begin(),nums.end()),nums.end());

    vector<int> ans;

    if(n == 0) return ans;
    if(nums[0] != 1){
        for(int x=1; x<nums[0]; x++){
            ans.push_back(x);
        }
    }

    for(int i=0; i<n-1; i++){
        if(nums[i+1] - nums[i] > 1){
            for(int j=nums[i]+1; j<nums[i+1]; j++){
                ans.push_back(j);
            }
        }
    }

    if(nums.back() != n){
        for(int k=nums.back(); k<=n; k++){
            ans.push_back(k);
        }
    }

    return ans;
}

int main(){

    vector<int> nums = {1 , 2 , 2 , 4 , 3 , 7 , 3 , 8};

    vector<int> result = allMissingNum(nums);

    for(int val : result){
        cout << val << " ";
    }

    return 0;
}
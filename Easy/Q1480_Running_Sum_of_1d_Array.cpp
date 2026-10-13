#include <iostream>
#include <vector>
using namespace std;

vector<int> RunningSum(vector<int> &nums){

    vector<int> ans;
    int sum = 0;

    for(int i=0; i<nums.size(); i++){
        sum += nums[i];
        ans.push_back(sum);
    }

    return ans;
}

int main(){

    vector<int> nums = {1 , 2 , 3 , 4};

    vector<int> ans = RunningSum(nums);

    for(int val : ans){
        cout << val << " ";
    }

    return 0;
}
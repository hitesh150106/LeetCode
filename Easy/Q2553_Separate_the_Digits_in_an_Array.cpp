#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> separateDigits(vector<int>& nums) {

    vector<int> ans;
    vector<int> pairs;

    for(int i=0; i<nums.size(); i++){
        while(nums[i] != 0){
            int digit = 0;

            digit = nums[i] % 10;
            nums[i] /= 10;

            pairs.push_back(digit);
        }

        reverse(pairs.begin() , pairs.end());

        for(int j=0; j<pairs.size(); j++){
            ans.push_back(pairs[j]);
        }

        pairs.clear();
    }

    return ans;
}


int main(){

    vector<int> nums = {13,25,83,77};

    vector<int> ans = separateDigits(nums);

    for(int x : ans){
        cout << x << " ";
    }

    return 0;
}
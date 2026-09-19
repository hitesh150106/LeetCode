#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

// TC : O(n logn)
// SC : O(1)
int nRepeatedNum(vector<int> &nums){

    sort(nums.begin(),nums.end());

    for(int i=0; i<nums.size(); i++){
        if(nums[i-1] == nums[i]){
            return nums[i];
        }
    }

    return -1;
}


// TC : O(n)
// SC : O(n)
int nRepeatedNum2(vector<int> &nums){

    unordered_set<int> seen;

    for(int x : nums){
        if(seen.count(x)){
            return x;
        }
        seen.insert(x);
    }

    return -1;
}


// TC : O(n)
// SC : O(1)
// Most optimal
int nRepeatedNum3(vector<int> &nums){

    int n = nums.size();

    for(int i=0; i+2<n; i++){
        if(nums[i] == nums[i+1] || nums[i] == nums[i+2]){
            return nums[i];
        }
    }

    return nums.back();
}


int main(){

    vector<int> nums = {1 , 4 , 2 , 4 , 8 , 9};

    cout << "Approach One : ";
    cout << nRepeatedNum(nums) << endl;

    cout << "Approach Two : ";
    cout << nRepeatedNum3(nums) << endl;    

    cout << "More Optimal : ";
    cout << nRepeatedNum3(nums);

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;


int countKDifference(vector<int>& nums, int k){

    int count = 0;
    int n = nums.size();

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int dig = abs(nums[i] - nums[j]);
            if(dig == k) count++;
        }
    }

    return count;
}


int main(){

    vector<int> nums = {1 , 2 , 2 , 1};
    int k = 1;

    cout << countKDifference(nums , k);

    return 0;
}
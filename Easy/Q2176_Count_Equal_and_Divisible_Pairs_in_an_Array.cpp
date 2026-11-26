#include <iostream>
#include <vector>
using namespace std;

int countPairs(vector<int>& nums, int k){

    int n = nums.size();
    int count = 0;

    for(int i=0;  i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i] == nums[j] && (i*j) % k == 0){
                count++;
            }
        }
    }

    return count;
}

int main(){

    vector<int> nums = {3,1,2,2,2,1,3};
    int k = 2;

    cout << countPairs(nums , k);

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minMoves(vector<int>& nums){

    sort(nums.begin() , nums.end());

    int n = nums.size();
    int count = 0;
    int tar = nums.back();

    for(int i=0; i<n; i++){

        while(nums[i] != tar){
            nums[i]++;
            count++;
        }
    }

    return count;
}

int main(){

    vector<int> nums = {2 , 1 , 3};

    cout << minMoves(nums);

    return 0;
}
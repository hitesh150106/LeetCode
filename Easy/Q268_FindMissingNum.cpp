#include <iostream>
#include <vector>
using namespace std;

int missingNum(vector<int> nums){

    int n = nums.size();

    int expectedSum = n*(n+1)/2;
    int actualSum = 0;

    for(int i=0; i<n; i++){
        actualSum += nums[i];
    }

    return expectedSum - actualSum;
}

int main(){

    vector<int> nums = {0 , 2 , 1 , 3};

    cout << missingNum(nums);
    
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int arraySign(vector<int>& nums){

    int n = nums.size();
    int negativeCount = 0;

    for(int i=0; i<n; i++){
        if(nums[i] == 0) return 0;
        if(nums[i] < 0) negativeCount++;
    }

    if(negativeCount % 2 != 0) return -1;
    else return 1;
}

int main(){

    vector<int> nums = {-1,-2,-3,-4,3,2,1};

    cout << arraySign(nums);

    return 0;
}
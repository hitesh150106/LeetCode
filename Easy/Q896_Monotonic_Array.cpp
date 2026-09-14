#include <iostream>
#include <vector>
using namespace std;

bool isMonotonic(vector<int> &nums){

    int n = nums.size();
    int Increasing = 0;
    int Decreasing = 0;

    for(int i=1; i<n; i++){
        if(nums[i-1] <= nums[i]) Increasing++;
        if(nums[i-1] >= nums[i]) Decreasing++;
    }

    if(Increasing == n-1 || Decreasing == n-1) return true;
    else return false;
}

int main(){

    vector<int> nums = {3 , 8 , 10};

    cout << isMonotonic(nums);

    return 0;
}
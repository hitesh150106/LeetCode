#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {1,2,0};

    int st = 0;

    for(int i=st; i<nums.size(); i++){
        if(nums[i] > nums[i+1]){
            swap(nums[i],nums[i+1]);
            st=0;
        }
    }

    for(int val : nums){
        cout << val << " ";
    }


    return 0;
}
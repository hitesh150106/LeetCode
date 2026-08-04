#include <iostream>
#include <vector>
using namespace std;

// worst case
// TC : O(n^2)
void moveZeroes(vector<int> &nums){

    int n = nums.size();

    int count = 0;

    for(int i=0; i<n; i++){
        if(nums[i] == 0){
            count++;
        }
    }

    while(count >= 0){
        
        for(int j=0; j<n-1; j++){
            if(nums[j] == 0){
                swap(nums[j],nums[j+1]);
            }
        }
        count--;
    }
}


// Optimal

void moveZeroes2(vector<int>& nums){
    int n = nums.size();

    int pos = 0;

    for(int i=0; i<n; i++){
        if(nums[i] != 0){
            swap(nums[pos],nums[i]);
            pos++;
        }
    }
}

int main(){

    vector<int> nums = {0 , 1 , 0 , 3 , 12};

    moveZeroes(nums);

    for(int val : nums){
        cout << val << " ";
    }
    cout << endl;
    

    moveZeroes2(nums);

    for(int num : nums){
        cout << num << " ";
    }
    return 0;
}
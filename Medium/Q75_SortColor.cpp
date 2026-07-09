#include <iostream>
#include <vector>
using namespace std;

// This Question can be solved by All 3 sorting Algorthims too.
// O(n^2)


// O(n)
void SortColor(vector<int> &nums){

    int n = nums.size();
    int count0 = 0, count1 = 1, count2 = 0;

    for(int i=0; i<n; i++){
        if(nums[i] == 0) count0++;
        else if(nums[i] == 1) count1++;
        else count2++;
    }

    int idx = 0;

    for(int i=0; i<count0; i++){
        nums[idx++] = 0;
    }

    for(int i=0; i<count1; i++){
        nums[idx++] = 1;
    }

    for(int i=0; i<count2; i++){
        nums[idx++] = 2;
    }    
}


// O(n) and O(1)
void SortColor(vector<int> &nums){

    int low = 0;
    int mid = 0;
    int high = nums.size()-1;

    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        } else if(nums[mid] == 1){
            mid++;
        } else{
            swap(nums[high],nums[mid]);
            high--;
        }
    }
}


int main(){

    vector<int> nums = {2,0,2,1,1,0,1,2,0,0};

    SortColor(nums);

    for(int val : nums){
        cout << val << " ";
    }

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;


// Brute Force
bool isStrictlyIncreasing(vector<int>& nums){

    int n =  nums.size();

    for(int i=1; i<n; i++){
        if(nums[i] <= nums[i-1]) return false;
    }

    return true;
}

bool canBeIncreasing(vector<int>& nums){

    int n = nums.size();

    for(int i=0; i<n; i++){

        int removed = nums[i];

        nums.erase(nums.begin() + i);

        if(isStrictlyIncreasing(nums)){
            return true;
        }

        nums.insert(nums.begin() + i , removed);
    }

    return false;
}


// Optimsed
bool canBeIncreasing2(vector<int>& nums){

    int count = 0;

    for(int i=1; i<nums.size(); i++){

        if(nums[i] <= nums[i-1]){
            if(count == 1) return false;
            count++;

            if(i > 1 && nums[i] <= nums[i-2]) nums[i] = nums[i-1];
        }
    }
    return true;
}


int main(){

    vector<int> nums = {1,2,10,5,7};

    cout << "Brute Force : ";
    cout << canBeIncreasing(nums) << endl;

    cout << "Optimsed : ";
    cout << canBeIncreasing2(nums) << endl;

    return 0;
}
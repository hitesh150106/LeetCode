#include <iostream>
#include <vector>
using namespace std;

int maximumDifference(vector<int>& nums){

    int n = nums.size();
    int maximum = -1;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i] < nums[j]){
                maximum = max(maximum , nums[j] - nums[i]);
            }
        }
    }

    return maximum;

}

int maximumDifference2(vector<int>& nums){

    int mini = nums[0];
    int maxi = -1;

    for(int i : nums){
        if(i > mini){
            maxi = max(maxi , i-mini);
        }
        mini = min(mini , i);
    }
    return maxi;
}



int main(){

    vector<int> nums = {7 , 1 , 5 , 4};

    cout << "Brute Force : ";
    cout << maximumDifference(nums) << endl;

    cout << "Optimal : ";
    cout << maximumDifference2(nums);

    return 0;
}
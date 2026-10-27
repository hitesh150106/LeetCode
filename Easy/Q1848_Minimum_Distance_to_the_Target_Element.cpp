#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int getMinDistance(vector<int>& nums, int target, int start){

    int n = nums.size();
    int minimum = INT_MAX;

    for(int i=0; i<n; i++){
        if(nums[i] == target){
            minimum = min(minimum , abs(i - start));
        }
    }

    return minimum;

}

int main(){

    vector<int> nums = {1 , 2 , 3 , 4 , 5};
    int target = 5;
    int start = 3;

    cout << getMinDistance(nums , target , start);

    return 0;
}
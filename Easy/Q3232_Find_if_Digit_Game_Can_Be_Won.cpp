#include <iostream>
#include <vector>
using namespace std;

bool canAliceWin(vector<int>& nums){

    int singleSum = 0;
    int doubleSum = 0;

    for(int i=0; i<nums.size(); i++){
        if(nums[i] > 9){
            doubleSum += nums[i];
        } else {
            singleSum += nums[i];
        }
    }

    if(singleSum == doubleSum) return false;
    else return true;

}

int main(){

    vector<int> nums = {1 , 2 , 3 , 4 , 10};

    cout << canAliceWin(nums);

    return 0;
}
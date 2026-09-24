#include <iostream>
#include <vector>
using namespace std;

int smallestIndex(vector<int> &nums){

    int n = nums.size();

    for(int i=0; i<n; i++){

        int sum = 0;

        while(nums[i] > 0){
            int digit = 0;
            digit = nums[i] % 10;
            sum += digit;

            nums[i] /= 10;
        }

        if(sum == i){
            return i;
        }
    }

    return -1;
}

int main(){

    vector<int> nums = {1 , 3 , 2};

    cout << smallestIndex(nums);

    return 0;
}
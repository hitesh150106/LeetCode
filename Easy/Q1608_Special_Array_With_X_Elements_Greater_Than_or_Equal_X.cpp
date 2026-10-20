#include <iostream>
#include <vector>
using namespace std;

int specialArray(vector<int>& nums){

    int n = nums.size();

    for(int x=0; x<=n; x++){

        int count = 0;

        for(int i=0; i<n; i++){
            if(nums[i] >= x){
                count++;
            }
        }

        if(count == x) return count;
    }

    return -1;
}

int main(){

    vector<int> nums = {3 , 5};

    cout << specialArray(nums);

    return 0;
}
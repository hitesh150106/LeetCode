#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int missingInteger(vector<int> &nums){

    int seqSum = nums[0];
    unordered_set<int> st(nums.begin(),nums.end());

    for(int j=1; j<nums.size(); j++){
        if(nums[j] == nums[j-1]+1){
            seqSum += nums[j];
        } else {
            break;
        }
    }

    while(st.count(seqSum)){
        seqSum++;
    }

    return seqSum;
}

int main(){

    vector<int> nums = {1, 2, 4 , 3, 8 , 9};

    cout << missingInteger(nums);

    return 0;
}
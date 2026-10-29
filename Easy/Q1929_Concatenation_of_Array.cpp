#include <iostream>
#include <vector>
using namespace std;

vector<int> getConcatenation(vector<int>& nums){

    vector<int> copy = nums;

    for(int i=0; i<copy.size(); i++){
        nums.push_back(copy[i]);
    }

    return nums;
}

int main(){

    vector<int> nums = {1 , 2 , 1};

    vector<int> ans = getConcatenation(nums);

    for(int val : ans){
        cout << val << " ";
    }

    return 0;
}
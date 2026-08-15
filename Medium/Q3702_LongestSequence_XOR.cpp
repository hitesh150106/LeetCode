#include <iostream>
#include <vector>
using namespace std;

int longestSequence(vector<int> nums){

    int n = nums.size();
    int resultXor = 0;
    bool allZeroes = true;

    for(int x : nums){
        resultXor = (resultXor ^ x);

        if(x != 0) allZeroes = false;
    }

    if(allZeroes) return 0;

    return (resultXor == 0) ? n-1 : n ;
}

int main(){

    vector<int> nums = {1 , 2 , 3};

    cout << longestSequence(nums);

    return 0;
}
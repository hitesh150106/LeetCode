#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findErrorNums(vector<int>& nums) {

        int n = nums.size();
        unordered_set<int> seen;

        int expectedSum = n * (n+1) / 2;
        int actualSum = 0;
        int duplicate = -1;

        for(int x : nums){
            actualSum += x;
            if(seen.find(x) != seen.end()){
                duplicate = x;
            }
            seen.insert(x);
        }
        
        int missing = expectedSum - (actualSum - duplicate);

        return {duplicate, missing};
    }

int main(){

    vector<int> nums = {1, 2 , 3 , 3};
    
    vector<int> result = findErrorNums(nums);

    for(int val : result){
        cout << val << " ";
    }

    return 0;
}    
#include <iostream>
#include <vector>
using namespace std;

// Brute Force
vector<int> sortArrayByParityII(vector<int>& nums) {

    int n = nums.size();
    vector<int> odd , even , ans;

    for(int x : nums){
        if(x % 2 == 0) even.push_back(x);
        else odd.push_back(x);
    }

    for(int i=0; i<n/2; i++){
        ans.push_back(even[i]);
        ans.push_back(odd[i]);
    }

    return ans;
}

int main(){

    vector<int> nums = {4 , 2 , 5 , 7};

    cout << "Burte Force : ";

    vector<int> result1 = sortArrayByParityII(nums);
    for(int val : result1){
        cout << val << " ";
    }

    cout << endl;


    return 0;
}
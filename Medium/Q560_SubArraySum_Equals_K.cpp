#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <algorithm>
#include <unordered_map>
using namespace std;

// Brute Force
int subarraySum(vector<int>& nums, int k) {
    
    int n = nums.size();
    int count = 0;

    for(int i=0; i<n; i++){
        int sum = 0;

        for(int j=i; j<n; j++){
            sum += nums[j];
            if(sum == k) count++;
        }
    }
    return count;
}


// Optimal
int subarraySum2(vector<int>& nums, int k){

    unordered_map<int , int> mp;
    mp[0] = 1;

    int count = 0;
    int sum = 0;

    for(int x : nums){
        sum += x;
        if(mp.find(sum - k) != mp.end()){
            count += mp[sum -k];
        }
        mp[sum]++;
    }
    return count;
}


int main(){
    
    vector<int> nums = {1,1,1};
    int k = 2;

    cout << "Brute Force : ";
    cout << subarraySum(nums , k) << endl;

    cout << "Optimal : " ;
    cout << subarraySum2(nums , k) << endl;

    return 0;
}
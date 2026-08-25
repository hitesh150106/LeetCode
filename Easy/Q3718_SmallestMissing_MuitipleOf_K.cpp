#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int missingMultiple(vector<int> nums , int k){

    unordered_set<int> seen(nums.begin(),nums.end());

    int ans = k;

    while(seen.count(ans)){
        ans += k;
    }

    return ans;
}

int main(){

    vector<int> nums = {2 , 4 , 5 , 6 , 8};
    int k = 2;

    cout << missingMultiple(nums , k);
    
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <algorithm>
using namespace std;

// Brute Force
// TC : O(n^3 Log(triplets))
vector<vector<int>> threeSum(vector<int>& nums) {

    vector<vector<int>> ans;
    set<vector<int>> s;

    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            for(int k=j+1; k<nums.size(); k++){
                if(nums[i] + nums[j] + nums[k] == 0){
                    vector<int> trip = {nums[i] , nums[j] , nums[k]};
                    sort(trip.begin(),trip.end());

                    if(s.find(trip) == s.end()){
                        s.insert(trip);
                        ans.push_back(trip);
                    }
                }
            }
        }
    }
    return ans;
}


// Better using Hashing
// TC : O(n^2 Log(trips))
vector<vector<int>> threeSum2(vector<int>& nums) {
    
    int n = nums.size();
    set<vector<int>> uniqueTrips;

    for(int i=0; i<n; i++){
        int tar = -nums[i];
        set<int> s;

        for(int j=i+1; j<n; j++){
            int third = tar - nums[j];

            if(s.find(third) != s.end()){
                vector<int> trip = {nums[i] , nums[j] , third};
                sort(trip.begin(),trip.end());
                uniqueTrips.insert(trip);
            }

            s.insert(nums[j]);
        }
    }

    vector<vector<int>> ans(uniqueTrips.begin(),uniqueTrips.end());
    return ans;
}


// Most Optimal using Two pointer
// TC : O( nLogn + n^2)
vector<vector<int>> threeSum3(vector<int>& nums) {
    
    int n = nums.size();
    vector<vector<int>> ans;

    sort(nums.begin(),nums.end());

    for(int i=0; i<n; i++){
        if(i > 0 && nums[i] == nums[i-1]) continue;

        int j = i+1;
        int k = n-1;

        while(j < k){
            int sum = nums[i] + nums[j] + nums[k];

            if(sum < 0){
                j++;
            } else if(sum > 0){
                k--;
            } else {
                ans.push_back({nums[i],nums[j], nums[k]});
                j++;
                k--;

                while(j < k && nums[j] == nums[j-1]) j++;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    // 1. Brute Force
    cout << "--- Brute Force ---\n";
    vector<vector<int>> result1 = threeSum(nums);
    for (const auto& row : result1) {
        cout << "[ ";
        for (int num : row) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    // 2. Better Using Hashing
    cout << "\n--- Better Using Hashing ---\n";
    vector<vector<int>> result2 = threeSum2(nums);
    for (const auto& row : result2) {
        cout << "[ ";
        for (int num : row) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    // 3. Most Optimal Using Two Pointers
    cout << "\n--- Most Optimal (Two Pointer) ---\n";
    vector<vector<int>> result3 = threeSum3(nums);
    for (const auto& row : result3) {
        cout << "[ ";
        for (int num : row) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}
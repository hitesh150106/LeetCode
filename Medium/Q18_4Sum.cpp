#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums , int tar){
    
    int n = nums.size();
    vector<vector<int>> ans;

    sort(nums.begin(),nums.end());

    for(int i=0; i<n; i++){

        if(i > 0 && nums[i] == nums[i-1]) continue;

        for(int j=i+1; j<n; j++){

            if(j > i+1 && nums[j] == nums[j-1]) continue;

            int k = j+1;
            int l = n-1;

            while(k < l){
                long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[k] + (long long)nums[l];

                if(sum > tar){
                    l--;
                } else if(sum < tar){
                    k++;
                } else {
                    ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                    k++;
                    l--;

                    while(k < l && nums[k] == nums[k-1]) k++; 
                }
            }
        }
    }
    return ans;
}

int main() {
    
    vector<int> nums1 = {1, 0, -1, 0, -2, 2};
    int tar1 = 0;

    cout << "--- Test Case 1 (Target: " << tar1 << ") ---\n";
    vector<vector<int>> result1 = fourSum(nums1, tar1);
    for (const auto& row : result1) {
        cout << "[ ";
        for (int num : row) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    // Example 2: Duplicate numbers
    vector<int> nums2 = {2, 2, 2, 2, 2};
    int tar2 = 8;

    cout << "\n--- Test Case 2 (Target: " << tar2 << ") ---\n";
    vector<vector<int>> result2 = fourSum(nums2, tar2);
    for (const auto& row : result2) {
        cout << "[ ";
        for (int num : row) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

// Brute Force  - TC : O((n+m)log(n+m))

// double findMedianSortedArray(vector<int> &nums1 , vector<int> & nums2){
//     vector<int> ans;

//     for(int i=0; i<nums1.size(); i++){
//         ans.push_back(nums1[i]);
//     }

//     for(int i=0; i<nums2.size(); i++){
//         ans.push_back(nums2[i]);
//     }

//     sort(ans.begin(),ans.end());

//     int totalSize = ans.size();

//     if(totalSize % 2 != 0){
//         return ans[totalSize/2];
//     } else {
//         int mid1 = (totalSize/2) -1;
//         int mid2 = totalSize/2;
//         return (ans[mid1] + ans[mid2])/2.0;
//     }
// }


// optimzed - TC : O(log(min(m,n)))

double findMedianSortedArray(vector<int> &nums1, vector<int> &nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        
        if (n1 > n2)
            return findMedianSortedArray(nums2, nums1);
        
        int n = n1 + n2;
        int left = (n1 + n2 + 1) / 2;
        int low = 0, high = n1;
        
        while (low <= high) {
            int mid1 = (low + high) >> 1; 
            int mid2 = left - mid1;
            
            int l1 = INT_MIN;
            int l2 = INT_MIN;
            int r1 = INT_MAX;
            int r2 = INT_MAX;
            
            if (mid1 < n1)
                r1 = nums1[mid1];
            if (mid2 < n2)
                r2 = nums2[mid2];
            if (mid1 - 1 >= 0)
                l1 = nums1[mid1 - 1];
            if (mid2 - 1 >= 0)
                l2 = nums2[mid2 - 1];
            
            if (l1 <= r2 && l2 <= r1) {
                if (n % 2 == 1)
                    return max(l1, l2);
                else
                    return ((double)(max(l1, l2) + min(r1, r2))) / 2.0;
            }
            else if (l1 > r2) {
                high = mid1 - 1;
            }
            else {
                low = mid1 + 1;
            }
        }
        
        return 0;
    }

int main(){

    vector<int> nums1 = {1,2};
    vector<int> nums2 = {3,4};

    findMedianSortedArray(nums1 , nums2);

    return 0;
}
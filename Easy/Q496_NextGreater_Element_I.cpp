#include <iostream>
#include <vector>
using namespace std;

// TC : O(n * m)
// SC : O(1)
// more optimal solution exist using map and stack but I will do that after
vector<int> nextGreater(vector<int> nums1 , vector<int> nums2){

    vector<int> ans;

    for(int i=0; i<nums1.size(); i++){
        bool found = false;
        int val = nums1[i];

        for(int j=0; j<nums2.size(); j++){
            if(val == nums2[j]){
                for(int k=j+1; k<nums2.size(); k++){
                    if(val < nums2[k]){
                        ans.push_back(nums2[k]);
                        found = true;
                        break;
                    }
                }
                if(found == false){
                    ans.push_back(-1);
                }
                break;
            }
        }
    }
    return ans;
}

int main(){

    vector<int> nums1 = {4,1,2};
    vector<int> nums2 = {1,3,4,2};

    vector<int> result = nextGreater(nums1 , nums2);

    for(int val : result){
        cout << val << " ";
    }
}
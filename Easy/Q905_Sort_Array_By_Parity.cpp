#include <iostream>
#include <vector>
using namespace std;


vector<int> parityArray(vector<int> &nums){

    int n = nums.size();
    vector<int> ans;

    for(int i=0; i<n; i++){
        if(nums[i] % 2 == 0) ans.push_back(nums[i]);
    }

    for(int j=0; j<n; j++){
        if(nums[j] % 2 != 0) ans.push_back(nums[j]);
    }
    
    return ans;
}


// More optimal
vector<int> parityArray2(vector<int> &nums2){

    int i = 0;
    int j = 0;

    while(i < nums2.size()){
        if(nums2[i] % 2 == 0){
            swap(nums2[i],nums2[j]);
            i++;
            j++;
        } else {
            i++;
        }
    }

    return nums2;
}


int main(){

    vector<int> nums = {3 , 1 , 5 , 2 , 8};
    vector<int> nums2 = {3 , 1 , 5 , 2 , 8};    

    cout << "Approach One : ";
    
    vector<int> result1 = parityArray(nums);
    for(int val : result1){
        cout << val << " ";
    }

    cout << endl;


    cout << "More Optimal : ";

    parityArray2(nums2);

    for(int val : nums2){
        cout << val << " ";
    }

    return 0;
}
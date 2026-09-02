#include <iostream>
#include <vector>
using namespace std;

// Conditions for Count Inversion:
//    1.  i < j
//    2. nums[i] > nums[j]   

// Brute Force
int CountInversion(vector<int> &nums){

    int n = nums.size();
    int ans = 0;

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i] > nums[j]){
                ans++;
            }
        }
    }

    return ans;
}


// Using Merge Sort
int merge(vector<int> &nums , int st , int mid , int end){

    vector<int> temp;
    int i = st;
    int j = mid+1;
    int invCount = 0;

    while(i <= mid && j <= end){
        if(nums[i] <= nums[j]){
            temp.push_back(nums[i]);
            i++;
        } else {
            temp.push_back(nums[j]);
            j++;
            invCount += (mid - i + 1);
        }
    }

    while(i <= mid){
        temp.push_back(nums[i]);
        i++;        
    }

    while(j <= end){
        temp.push_back(nums[j]);
        j++;        
    }  
    
    for(int idx=0; idx<temp.size(); idx++){
        nums[idx+st] = temp[idx];
    }

    return invCount;
}

int CountInversion2(vector<int> &nums , int st , int end){

    if(st < end){
        int mid = st + (end-st)/2;

        int LeftInversionCount = CountInversion2(nums , st , mid);
        int RigthInversionCount = CountInversion2(nums , mid+1 , end);

        int currInversionCount = merge(nums , st , mid , end);

        return LeftInversionCount + RigthInversionCount + currInversionCount;
    }

    return 0;
}


int main(){

    vector<int> nums = {6,3,5,2,7};

    cout << "Burte Force : ";
    cout << CountInversion(nums) << endl;

    cout << "Optimal : ";
    cout << CountInversion2(nums , 0 , nums.size()-1);

    return 0;
}
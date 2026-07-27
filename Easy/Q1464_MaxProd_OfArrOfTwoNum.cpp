#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Optimal
int MaxProd(vector<int> &nums){
    int n = nums.size();
    
    sort(nums.begin(),nums.end());

    return (nums[n-1]-1) * (nums[n-2]-1);
}

// Most Optimal
int MaxProd2(vector<int> &nums){
    int max1 = 0;
    int max2 = 0;

    for(int x : nums){
        if(x > max1){
            max2 = max1;
            max1 = x;
        } else if(x > max2){
            max2 = x;
        }
    }
    return (max1 - 1) * (max2 - 1);
}

int main(){

    vector<int> nums = {1 , 3 , 9 , 3 , 4 , 5};

    cout << "Approach One : " ;
    cout << MaxProd(nums) << endl;

    cout << "Approach Two : ";
    cout << MaxProd2(nums) << endl;

    return 0;
}
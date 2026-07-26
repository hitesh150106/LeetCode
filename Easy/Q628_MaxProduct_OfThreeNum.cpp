#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// TC : O(n Logn)
int maximumProduct(vector<int> &nums){

    int n = nums.size();
    sort(nums.begin(),nums.end());

    int IncludeNegative = nums.back() * nums[0] * nums[1];
    int LargestThree = nums.back() * nums[n-2] * nums[n-3];

    return max(IncludeNegative , LargestThree);
}

// TC : O(n)
int maximumProduct2(vector<int> &nums){

    int max1 = INT_MIN , max2 = INT_MIN , max3 = INT_MIN;
    int min1 = INT_MAX , min2 = INT_MAX;

    for(int x : nums){
        if(x > max1){
            max3 = max2;
            max2 = max1;
            max1 = x;
        } else if(x > max2){
            max3 = max2;
            max2 = x;
        } else if(x > max3){
            max3 = x;
        }

        if(x < min1){
            min2 = min1;
            min1 = x;
        } else if(x < min2){
            min2 = x;
        }
    }

    return max(max1 * max2 * max3 , max1 * min1 * min2);
}


int main(){

    vector<int> nums = {-100 , -96 , 1 , 4 , 3 , 2};

    cout << "Approach One : ";
    cout << maximumProduct(nums) << endl;

    cout << "Approach Two : ";
    cout << maximumProduct2(nums) << endl;

    return 0;
}
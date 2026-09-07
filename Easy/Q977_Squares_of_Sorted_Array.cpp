#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// O(n Logn)
vector<int> sortedSquare(vector<int> &nums){

    vector<int> ans;

    for(int i=0; i<nums.size(); i++){
        ans.push_back(nums[i] * nums[i]);
    }

    sort(ans.begin(),ans.end());

    return ans;
}

// O(N)
vector<int> sortedSquare2(vector<int> &nums){

    int n = nums.size();
    vector<int> ans(n);

    int i = 0;
    int j = n-1;
    int k = n-1;

    while(i <= j){

        if(abs(nums[i]) > abs(nums[j])){
            ans[k] = nums[i] * nums[i];
            k-- , i++;
        } else {
            ans[k] = nums[j] * nums[j];
            k--; j--;
        }
    }

    return ans;
}

int main(){

    vector<int> nums = {-4,-1,0,3,10};

    vector<int> result = sortedSquare(nums);
    vector<int> result2 = sortedSquare2(nums);

    cout << "Burte Force : ";

    for(int val : result){
        cout << val << " ";
    }

    cout << endl;

    cout << "Optimal : ";

    for(int val : result2){
        cout << val << " ";
    }    

    return 0;
}
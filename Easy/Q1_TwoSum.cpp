#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

// Brute Force , TC : O(n^2)
vector<int> TwoSum(vector<int> &nums , int tar){
    vector<int> ans;

    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            if(nums[i] + nums[j] == tar){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }

    return ans;
}


// Better , TC : O(nlogn)
// Two Pointer
vector<int> TwoSumPointer(vector<int> &nums , int tar){

    vector<int> copy = nums;
    sort(copy.begin(),copy.end());

    int st = 0;
    int end = nums.size()-1;

    int num1 = -1;
    int num2 = -1;

    while(st < end){
        int sum = copy[st] + copy[end];
        if(sum == tar){
            num1 = copy[st];
            num2 = copy[end];
            break;
        } else if(sum > tar){
            end--;
        } else {
            st++;
        }
    }

    int index1 = -1 , index2 = -1;

    for(int i=0; i<nums.size(); i++){
        if(nums[i] == num1 && index1 == -1){
            index1 = i;
        } else if(nums[i] == num2) {
            index2 = i;
        }
    }
    return {index1 , index2};
}


// Optimal TC : O(log)
// Hashing
vector<int> TwoSumHashing(vector<int> &nums , int tar){
    unordered_map<int , int> m;
    vector<int> ans;

    for(int i=0; i<nums.size(); i++){
        int first = nums[i];
        int sec = tar - first;
        if(m.find(sec) != m.end()){
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
        }
        m[first] = i;
    }
    return ans;
}


int main(){

    vector<int> nums = {3,2,4};
    int tar = 6;

    vector<int> result = TwoSum(nums , tar);
    vector<int> result2 = TwoSumPointer(nums , tar);
    vector<int> result3 = TwoSumHashing(nums , tar);

    cout << "Brute Force : ";
    for(int val : result){
        cout << val << " ";
    }
    cout << endl;


    cout << "Two Pointer : ";
    for(int val : result2){
        cout << val << " ";
    }
    cout << endl;

   
    cout << "Optimal(Hashing) : ";
    for(int val : result3){
        cout << val << " ";
    }
    cout << endl;    

    return 0;
}
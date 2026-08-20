#include <iostream>
#include <vector>
using namespace std;

vector<int> distributeElement(vector<int> &nums){

    vector<int> arr1 , arr2;
    vector<int> result;

    arr1.push_back(nums[0]);
    arr2.push_back(nums[1]);

    for(int i=2; i<nums.size(); i++){
        if(arr1.back() > arr2.back()){
            arr1.push_back(nums[i]);
        } else {
            arr2.push_back(nums[i]);
        }
    }  

    for(int j=0; j<arr1.size(); j++){
        result.push_back(arr1[j]);
    }
  
    for(int k=0; k<arr2.size(); k++){
        result.push_back(arr2[k]);
    }
    
    return result;
}

int main(){

    vector<int> nums = {5 , 4 , 3 , 8};

    vector<int> result = distributeElement(nums);

    for(int val : result){
        cout << val << " ";
    }

    return 0;
}


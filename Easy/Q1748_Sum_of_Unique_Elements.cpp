#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int sumOfUnique(vector<int>& nums){

    int sum = 0;
    unordered_map<int , int> m;

    for(int x : nums){
        m[x]++;
    }

    for(auto& pair : m){
        int num = pair.first;
        int count = pair.second;
        if(count == 1){
            sum += num;
        }
    }

    return sum;
}

int main(){

    vector<int> nums = {1 , 2 , 3 , 2};

    cout << sumOfUnique(nums);

    return 0;
}
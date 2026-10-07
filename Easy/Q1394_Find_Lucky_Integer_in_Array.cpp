#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int luckyNum(vector<int> arr){

    unordered_map<int , int> freq;

    for(int x : arr){
        freq[x]++;
    }

    int ans = -1;

    for(auto &pair : freq){
        int value = pair.first;
        int count = pair.second;

        if(value == count){
            ans = max(ans , value);
        }
    }

    return ans;
}

int main(){

    vector<int> arr = {2 , 2 , 3 , 4};

    cout << luckyNum(arr);

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

void duplicateZeroes(vector<int> &arr){

    vector<int> ans;

    for(int i=0; i<arr.size(); i++){
        ans.push_back(arr[i]);
        if(arr[i] == 0) ans.push_back(0);
    }

    while(ans.size() > arr.size()) ans.pop_back();

    arr = ans;
}

int main(){

    vector<int> arr = {1 , 0 , 2 , 4 , 0 , 0 , 5};

    duplicateZeroes(arr);

    for(int val : arr){
        cout << val << " ";
    }

    return 0;
}
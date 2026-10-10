#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canBeEqual(vector<int>& tar, vector<int>& arr){

    sort(tar.begin() , tar.end());
    sort(arr.begin() , arr.end());

    for(int i=0; i<arr.size(); i++){
        if(arr[i] != tar[i]) return false;
    }

    return true;
}

int main(){

    vector<int> tar = {1,2,3,4};
    vector<int> arr = {2,4,1,3};

    cout << canBeEqual(tar , arr);

    return 0;
}
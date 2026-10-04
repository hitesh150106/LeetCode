#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

// O(n^2)
bool checkIfExist(vector<int> &arr){

    sort(arr.begin(),arr.end());

    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr.size(); j++){
            if(arr[i] == 2 * arr[j] && i != j){
                return true;
            }
        }
    }

    return false;
}

// O(n)
bool checkIfExist2(vector<int> &arr){

    unordered_set<int> seen;

    for(int x : arr){

        if(seen.count(x * 2)){
            return true;
        }

        if(x % 2 == 0 && seen.count(x / 2)){
            return true;
        }

        seen.insert(x);
    }

    return false;
}

int main(){

    vector<int> arr = {10 , 2 , 3 , 5};

    cout << "Brute Force :";
    cout << checkIfExist(arr) << endl;

    cout << "Optimal : ";
    cout << checkIfExist2(arr);

    return 0;
}
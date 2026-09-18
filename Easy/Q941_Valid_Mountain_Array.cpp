#include <iostream>
#include <vector>
#include <climits>
using namespace std;


// Brute Force
bool validMountain(vector<int> &arr){

    int n = arr.size();
    int maximum = INT_MIN;
    int idx = 0;

    for(int i=0; i<n; i++){
        maximum = max(arr[i] , maximum);
    }

    for(int j=0; j<n; j++){
        if(arr[j] == maximum) idx = j;
    }
    
    if(n < 3) return false;
    if(idx == 0 || idx == n-1) return false;

    for(int k=0; k<idx; k++){
        if(arr[k] < arr[k+1]) continue;
        else return false;
    }

    for(int l=idx+1; l<n-1; l++){
        if(arr[l] > arr[l+1]) continue;
        else return false;
    }    

    return true;
}



int main(){

    vector<int> arr = {1 , 8 , 2 , 0};

    cout << validMountain(arr);

    return 0;
}
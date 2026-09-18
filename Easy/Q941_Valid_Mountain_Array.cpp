#include <iostream>
#include <vector>
#include <climits>
using namespace std;

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


// More optimal
bool validMountain2(vector<int> &arr){

    int n = arr.size();
    if(n < 3) return false;

    int i = 0;

    // Increasing part
    while(i + 1 < n && arr[i] < arr[i+1]) i++;

    // Peak cannot be first or last
    if(i == 0 || i ==  n-1) return false;

    // Decreasing part
    while(i + 1 < n && arr[i] > arr[i+1]) i++;

    return i == n-1;
}


int main(){

    vector<int> arr = {1 , 8 , 2 , 0};

    cout << "Approach One : ";
    cout << validMountain(arr) << endl;

    cout << "More Optimal : ";
    cout << validMountain2(arr) << endl;

    return 0;
}
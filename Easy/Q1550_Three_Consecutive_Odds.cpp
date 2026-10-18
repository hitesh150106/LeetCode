#include <iostream>
#include <vector>
using namespace std;

bool ThreeConsectiveOdds(vector<int> arr){

    int n = arr.size();
    int count = 0;

    for(int i=0; i<n; i++){
        if(arr[i] % 2 != 0){
            count++;
            if(count == 3) return true;
        } else {
            count = 0;
        }
    }

    return false;
}

int main(){

    vector<int> arr = {1 , 3 , 2 , 5 , 9 , 11};

    cout << ThreeConsectiveOdds(arr);

    return 0;
}
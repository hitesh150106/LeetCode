#include <iostream>
#include <vector>
using namespace std;

bool parityArray(vector<int> nums1){

    int countEven = 0;
    int countOdd = 0;

    for(int i=0; i<nums1.size(); i++){
        if(nums1[i] % 2 == 0){
            countEven++;
        } else {
            countOdd++;
        }
    }

    bool canMakeEven = (countOdd == 0 || countOdd >= 2);
    bool canMakeOdd = (countOdd >= 1);

    return canMakeEven || canMakeEven;
}

int main(){

    vector<int> nums1 = {2 , 4};

    cout << parityArray(nums1);

    return 0;
}
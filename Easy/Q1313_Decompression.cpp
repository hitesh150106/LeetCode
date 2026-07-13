#include <iostream>
#include <vector>
using namespace std;

vector<int> decompressRELlist(vector<int> &nums){
    vector<int> res;

    for(int i=0; i<nums.size(); i++){
        int freq = nums[i++];
        int val = nums[i];
        for(int j=0; j<freq; j++){
            res.push_back(val);
        }
    }
    return res;

}

int main(){

    vector<int> nums = {1,2,3,4};
    vector<int> res = decompressRELlist(nums);

    for(int val : res){
        cout << val << " ";
    }

    cout << endl;

    return 0;
}
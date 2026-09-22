#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> AddToArray(vector<int> num , int k){

    vector<int> ans;

    int i = num.size()-1;
    int carry = 0;

    while(i >= 0 || k > 0 || carry > 0){

        int digit = 0;

        if(i >= 0){
            digit += num[i];
            i--;
        }

        digit += k % 10;
        k /= 10;

        digit += carry;

        ans.push_back(digit % 10);
        carry = digit / 10;
    }

    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){

    vector<int> num = {1 , 2 , 3 , 4};
    int k = 6;

    vector<int> result = AddToArray(num , k);

    for(int val : result){
        cout << val << " ";
    }

    return 0;
}
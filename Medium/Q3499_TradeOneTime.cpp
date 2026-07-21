#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxActiveSectionsAfterTrade(string s){
    
    int n = s.length();
    int countZero = 0;
    int countOne = 0;

    vector<int> zeroBlocks;

    for(int i=0; i<n; i++){
        if(s[i] == '1'){
            countOne++;
            if(countZero > 0){
                zeroBlocks.push_back(countZero);
                countZero = 0;
            }
        } else {
            countZero++;
        }
    }

    if(countZero > 0){
        zeroBlocks.push_back(countZero);
    }

    int maxPair = 0;

    for(int i=0; i+1<zeroBlocks.size(); i++){
        maxPair = max(maxPair , zeroBlocks[i] + zeroBlocks[i+1]);
    }

    return countOne + maxPair;

}

int main(){

    string s = "01";

    cout << maxActiveSectionsAfterTrade(s);

    return 0;
}
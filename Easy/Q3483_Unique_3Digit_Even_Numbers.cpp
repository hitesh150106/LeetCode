#include <iostream>
#include <vector>
using namespace std;

int uniquedigits(vector<int> &digits){

    int n = digits.size();
    int ans = 0;
    vector<bool> vis(1000 , false);

    for(int i=0; i<n; i++){
        if(digits[i] == 0) continue;
        for(int j=0; j<n; j++){
            if(j == i) continue;
            for(int k=0; k<n; k++){
                if(k == i || k == j || digits[k] % 2 != 0) continue;
                int x = digits[i]*100 + digits[j]*10 + digits[k];
                if(!vis[x]){
                    vis[x] = true;
                    ans++;
                }
            }
        }
    }
    return ans;
}

int main(){

    vector<int> digits = {2 , 4 ,3 , 7};

    cout << uniquedigits(digits);

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &position , int m , int n , int minAllowed){

    int basket = 1;
    int lastPosition = position[0];

    for(int i=1; i<n; i++){
        if((position[i] - lastPosition) >= minAllowed){
            basket++;
            lastPosition = position[i];
        }

        if(basket == m){
            return true;
        }
    }

    return false;
}

int maxDistance(vector<int> &position , int m){

    int n = position.size();

    sort(position.begin(),position.end());

    int st = 1;
    int end = position[n-1] - position[0];
    int ans = -1;

    while(st <= end){
        int mid = st + (end-st)/2;

        if(isPossible(position , m , n , mid)){
            ans = mid;
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans;
}

int main(){

    vector<int> position = {1 , 2 , 3 , 4 ,7};
    int m = 3;

    cout << maxDistance(position , m);

    return 0;
}
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxDistance(vector<int>& colors){

    int n = colors.size();
    int maximum = INT_MIN;
    int val = -1;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(colors[i] != colors[j]){
                val = abs(i - j);
            }
            maximum = max(maximum , val);
        }
    }

    return maximum;

}

int maxDistance2(vector<int>& colors){

    int n = colors.size();
    int x = n-1;

    while(x >= 0 && colors[x] == colors[0]){
        x--;
    }

    int y = 0;
    while(y < n && colors[y] == colors[n-1]){
        y++;
    }

    return max((n - y - 1) , (x));

}


int main(){

    vector<int> colors = {1 , 1 , 1 , 6 , 1 , 1 , 1};

    cout << "Brute Force : ";
    cout << maxDistance(colors) << endl;;

    cout << "Optimal : ";
    cout << maxDistance2(colors);
}
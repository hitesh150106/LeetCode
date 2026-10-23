#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int largestAltitude(vector<int>& gain){

    int n = gain.size();

    vector<int> alt(n+1 , 0);

    int sum = 0;

    for(int i=0; i<n; i++){
        sum += gain[i];
        alt[i] = sum;
    }

    int maxElement = alt[0];

    for(int x : alt) maxElement = max(maxElement , x);

    return maxElement;
}


int largestAltitude2(vector<int>& gain){

    int alt = 0;
    int maxAlt = 0;

    for(int g : gain){
        alt += g;
        maxAlt = max(maxAlt , alt);
    }

    return maxAlt;
}

int main(){

    vector<int> gain = {-5 , 1 , 5 , 0 , -7};

    cout << "Approch One : ";
    cout << largestAltitude(gain) << endl;

    cout << "More Optimised in SC : ";
    cout << largestAltitude2(gain);

    return 0;
}
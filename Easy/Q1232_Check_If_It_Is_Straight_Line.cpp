#include <iostream>
#include <vector>
using namespace std;

bool IsStraightLine(vector<vector<int>> &coordinates){

    int x1 = coordinates[0][0];
    int y1 = coordinates[0][1];

    int x2 = coordinates[1][0];
    int y2 = coordinates[1][1];

    for(int i=2; i<coordinates.size(); i++){
        int x = coordinates[i][0];
        int y = coordinates[i][1];

        if( (y-y1) / (x-x1) == (y2 - y1) / (x2 - x1)) return true;
    }
    return false;
}


int main(){

    vector<vector<int>> coordinates = {{1,2},{2,3},{3,4},{4,5},{5,6},{6,7}};

    cout << IsStraightLine(coordinates);

    return 0;
}
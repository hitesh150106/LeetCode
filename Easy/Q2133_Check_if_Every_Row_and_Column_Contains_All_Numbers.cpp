#include <iostream>
#include <vector>
using namespace std;

bool checkValid(vector<vector<int>>& matrix) {

    int n = matrix.size();

    for(int i=0; i<n; i++){

        vector<bool> rowSeen(n+1 , false);
        vector<bool> colSeen(n+1 , false);

        for(int j=0; j<n; j++){

            int rowValue = matrix[i][j];
            int colValue = matrix[j][i];

            if(rowValue < 1 || rowValue > n || colValue < 1 || colValue > n){
                return false;
            }

            if(rowSeen[rowValue] || colSeen[colValue]){
                return false;
            }

            rowSeen[rowValue] = true;
            colSeen[colValue] = true;
        }
    }
    return true;
}


int main(){

    vector<vector<int>> matrix = {{1,2,3},{3,1,2},{2,3,1}};

    cout << checkValid(matrix);

    return 0;
}
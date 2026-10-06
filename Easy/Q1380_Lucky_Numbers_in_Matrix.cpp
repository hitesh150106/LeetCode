#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> luckyNumbers(vector<vector<int>>& matrix) {

    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<int> ans;
    vector<int> rowMin(rows , INT_MAX);
    vector<int> colMax(cols , INT_MIN);

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            rowMin[i] = min(rowMin[i] , matrix[i][j]);
            colMax[j] = max(colMax[j] , matrix[i][j]);
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(matrix[i][j] == rowMin[i] && matrix[i][j] == colMax[j]){
                ans.push_back(matrix[i][j]);
            }
        }
    }

    return ans;
}

int main(){

    vector<vector<int>> matrix = {{3,7,8},{9,11,13},{15,16,17}};

    vector<int> ans = luckyNumbers(matrix);

    for(int val : ans){
        cout << val << " ";
    }

    return 0;
}
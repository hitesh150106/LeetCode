#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> transposeMatrix(vector<vector<int>> &matrix){

    int n = matrix[0].size();
    int m = matrix.size();

    vector<vector<int>> ans(m , vector<int>(n , 0));

    for(int col=0; col<m; col++){
        for(int row=0; row<n; row++){
            ans[col][row] = matrix[row][col];
        }
    }

    return ans;
}

int main(){

    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};

    vector<vector<int>> result = transposeMatrix(matrix);

    for (const auto &row : result) {
        cout << "[ ";
        for (int val : row) {
            cout << val << " ";
        }
        cout << "]\n";
    }

    return 0;
}
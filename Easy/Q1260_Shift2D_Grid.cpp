#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

    int m = grid.size();
    int n = grid[0].size();
    int total = m*n;

    k = k % total;

    vector<vector<int>> result(m, vector<int>(n));

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            int idx = i * n + j;
            int newIdx = (idx + k) % total;
            int newI = newIdx/n;
            int newJ = newIdx%n;

            result[newI][newJ] = grid[i][j];
        }
    }
    return result;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 1;

    vector<vector<int>> result = shiftGrid(grid, k);

    for (auto row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

bool knightMove(vector<vector<int>> &grid , int r , int c , int n , int expVal){

    if(r < 0 || c < 0 || r >= n || c >= n || grid[r][c] != expVal) return false;

    if(expVal == n*n - 1) return true;

    int ans1 = knightMove(grid , r-2 , c+1 , n , expVal+1);
    int ans2 = knightMove(grid , r-1 , c+2 , n , expVal+1);
    int ans3 = knightMove(grid , r+1 , c+2 , n , expVal+1);
    int ans4 = knightMove(grid , r+2 , c+1 , n , expVal+1);
    int ans5 = knightMove(grid , r+2 , c-1 , n , expVal+1);
    int ans6 = knightMove(grid , r+1 , c-2 , n , expVal+1);
    int ans7 = knightMove(grid , r-1 , c-2 , n , expVal+1);
    int ans8 = knightMove(grid , r-2 , c-1 , n , expVal+1);

    return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8;
}

bool checkValidGrid(vector<vector<int>> &grid){

    return knightMove(grid , 0 , 0 , grid.size() , 0);
}

int main(){

    vector<vector<int>> grid = {{0,3,6},{5,8,1},{2,7,4}};

    cout << checkValidGrid(grid);

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid){

    int m = grid.size();
    int n = grid[0].size();

    vector<int> ans;

    for(int i=0; i<m; i++)



    return ans;
}

int main(){

    vector<vector<int>> grid = {{1,3},{2,2}};

    vector<int> result = findMissingAndRepeatedValues(grid);

    for(int val : result){
        cout << val << " ";
    }

    return 0;
}
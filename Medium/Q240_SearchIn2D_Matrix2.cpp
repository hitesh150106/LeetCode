#include <iostream>
#include <vector>
using namespace std;

// TC : O(m*n)
bool searchMatrix(vector<vector<int>> &matrix , int target){

    int st = 0;
    int end = matrix[0].size()-1;

    while(st < matrix[0].size() && end >= 0){

        if(target == matrix[st][end]){
            return true;
        } else if(target < matrix[st][end]){
            end--;
        } else{
            st++;
        }
    }
    return false;
}


int main(){

    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target = 5;
    cout << searchMatrix(matrix , target);

    return 0;
}
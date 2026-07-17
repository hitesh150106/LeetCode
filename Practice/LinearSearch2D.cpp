#include <iostream>
#include <utility>
#include <climits>
using namespace std;

pair<int,int> LinearSearch(int matrix[][3] , int rows , int cols , int tar){

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(matrix[i][j] == tar){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}

int maximumRowSum(int matrix[][3] , int rows , int cols){
    int maxSum = INT_MIN;

    for(int i=0; i<rows; i++){
        int rowSum = 0;
        for(int j=0; j<cols; j++){
            rowSum += matrix[i][j];
        }
        maxSum = max(maxSum , rowSum);
    }
    return maxSum;
}

int maximumColSum(int matrix[][3] , int rows , int cols){
    int maxSum = INT_MIN;

    for(int i=0; i<rows; i++){
        int colSum = 0;
        for(int j=0; j<cols; j++){
            colSum += matrix[j][i];
        }
        maxSum = max(maxSum , colSum);
    }
    return maxSum;
}

int main(){

    int matrix[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};
    int rows = 3;
    int cols = 3; 

    int tar = 8;
    
    pair<int,int> pos = LinearSearch(matrix, rows, cols, tar);

    if (pos.first == -1 && pos.second == -1) {
        cout << "Not found\n";
    } else {
        cout << "Found at: (" << pos.first << ", " << pos.second << ")\n";
    }

    cout << "maximumRowSum = " << maximumRowSum(matrix , rows , cols) << endl;
    cout << "maximumColSum = "  << maximumColSum(matrix , rows , cols) << endl;

    return 0;
}
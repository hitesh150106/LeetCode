#include <iostream>
using namespace std;

bool sumGame(string num){

    int n = num.length();

    int leftKnownSum = 0;
    int rightKnownSum = 0;

    int leftQnMarkCount = 0;
    int rightQnMarkCount = 0;

    for(int i=0; i<n; i++){
        if(num[i] == '?'){
            if(i < n/2){
                leftQnMarkCount++;
            } else {
                rightQnMarkCount++;
            }
        } else {
            if(i < n/2){
                leftKnownSum += num[i] - '0';
            } else {
                rightKnownSum += num[i] - '0';
            }
        }
    }

    int totalQnMarks = leftQnMarkCount + rightQnMarkCount;
    if(totalQnMarks % 2 == 1) return true;

    int Left = 2 * leftKnownSum + 9 * leftQnMarkCount;
    int Right = 2 * rightKnownSum + 9 * rightQnMarkCount;

    if(Left == Right) return true;
    return false;

}

int main(){

    string num = "?3295???";

    cout << sumGame(num);

    return 0;
}
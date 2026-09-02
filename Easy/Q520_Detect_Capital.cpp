#include <iostream>
#include <vector>
using namespace std;

// Most Optimal
bool dectectCapital(string word){

    int n = word.length();

    int onlyFirstUpper = 0;
    int upperCount = 0;
    int nonUpperCount = 0;

    for(int i=0; i<n; i++){
        if(isupper(word[i])) upperCount++;
        else if(!isupper(word[i])) nonUpperCount++;
    }

    if(isupper(word[0])){
        for(int j=1; j<n; j++){
            if(!isupper(word[j])) onlyFirstUpper++;
        }
    }
    
    if(onlyFirstUpper == n-1 || nonUpperCount == n || upperCount == n) return true;
    else return false;
}


bool dectectCapital2(string word){

    int upperCount = 0;

    for(char ch : word){
        if(isupper(static_cast<unsigned char>(ch))) upperCount++;
    }

    return upperCount == 0 || upperCount == word.length() || (upperCount == 1 && isupper(static_cast<unsigned char>(word[0])));
}


int main(){

    string word = "Leetcode";

    cout << "Approach One : " ;
    cout << dectectCapital(word) << endl;

    cout << "Approach Two : " ;
    cout << dectectCapital2(word) ;

    return 0;
}
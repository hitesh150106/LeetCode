#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

bool IsUnique(vector<int> &arr){

    map<int,int> frequnecy;
    set<int> occurrences;

    for(int x : arr){
        frequnecy[x]++;
    }

    // The insert() function returns a pair:
    // So .second gives bool value 

    for(auto entry : frequnecy){
        int count = entry.second;

        if(!occurrences.insert(count).second){
            return false;
        }
    }

    return true;
}

int main(){

    vector<int> arr = {1 , 4 , 9 , 3 , 3 , 4 , 4 , 9 , 9 , 9};

    cout << IsUnique(arr);

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int prefixCount(vector<string>& words, string pref){

    int count = 0;

    for(auto w : words){

        if(w.size() < pref.size()) continue;

        bool isPrefix = true;

        for(int i=0; i<pref.size(); i++){
            if(w[i] != pref[i]){
                isPrefix = false;
                break;
            }
        }

        if(isPrefix) count++;
    }

    return count;
}

int main(){

    vector<string> words = {"pay","attention","practice","attend"};
    string pref = "at";

    cout <<prefixCount(words , pref);

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int countPrefixes(vector<string>& words, string s){

    int count = 0;

    for(auto w : words){

        if(w.size() > s.size()) continue;

        bool isPrefix = true;

        for(int i=0; i<w.size(); i++){
            if(w[i] != s[i]){
                isPrefix = false;
                break;
            }
        }

        if(isPrefix) count++;
    }

    return count;
}

int main(){

    vector<string> words = {"a","b","c","ab","bc","abc"};
    string s = "abc";

    cout << countPrefixes(words , s);

    return 0;
}
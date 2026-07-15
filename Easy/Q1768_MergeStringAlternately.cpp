#include <iostream>
#include <algorithm>
using namespace std;

string MergeAlternately(string word1 , string word2){
    string ans = "";

    int a = word1.length();
    int b = word2.length();

    while(0 < a && 0 < b){
        ans += word1[word1.length() - a];
        ans += word2[word2.length() - b];
        a--; b--;
    }

    while(0 < a){
        ans += word1[word1.length() - a];
        a--;
    }

    while(0 < b){
        ans += word2[word2.length() - b];
        b--;
    }

    return ans;
}

string MergeAlternately2(string word1 , string word2){

    string ans;
    int i = 0;
    int j = 0;

    while(i < word1.length() || j < word2.length()){
        if(i < word1.length()) ans.push_back(word1[i++]);
        if(i < word1.length()) ans.push_back(word2[i++]);
    }

    return ans;
}

int main(){

    string word1 = "abc";
    string word2 = "def";

    cout << MergeAlternately(word1 , word2);
    cout << MergeAlternately2(word1 , word2);
    
    return 0;
}
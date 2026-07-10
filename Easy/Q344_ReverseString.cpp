#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void ReverseString(vector<char> &s){

    int st = 0;
    int end =  s.size()-1;

    while(st < end){
        swap(s[st],s[end]);
        st++;
        end--;
    }
}

bool isPailndrome(string s2){

    int st = 0;
    int end = s2.length()-1;

    while(st < end){
        if(!isalnum(s2[st])){
            st++;
            continue;
        }  

        if(!isalnum(s2[end])){
            end--;
            continue;
        }

        if(tolower(s2[st]) != islower(s2[end])){
            return false;
        }

        st++;
        end--;
        
    }

    return true;
}

int main(){

    vector<char> s = {'h','i','t','e','s','h'};

    string s2 = "racecar";

    ReverseString(s);
    cout << isPailndrome(s2) << endl;

    for(char val : s){
        cout << val << " ";
    }

    cout << endl;

    return 0;
}
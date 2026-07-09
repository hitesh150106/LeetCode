#include <iostream>
#include <vector>
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

int main(){

    vector<char> s = {'h','i','t','e','s','h'};

    ReverseString(s);

    for(char val : s){
        cout << val << " ";
    }

    cout << endl;

    return 0;
}
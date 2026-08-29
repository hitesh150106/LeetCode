#include <iostream>
using namespace std;

bool studentAttendance(string s){

    int absentCount = 0;
    
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'A') absentCount++;
        else if(s[i] == 'L'){
            if(s[i+1] == 'L'){
                if(s[i+2] == 'L'){
                    return false;
                }
            }
        }
    }
    
    if(absentCount < 2) return true;
    else return false;
}

bool studentAttendance2(string s) {
        int a=0,l=0;
        for(auto ch:s)
        {
            if(ch!='L')
                l=0;
            if(ch=='A')
                a++;
            if(ch=='L')
            {
                l++;
                if(l>=3)
                    return false;
            }
        }
        
        return a>1?false:true;
}

int main(){

    string s = "ALLPPA";

    cout << "Approach One : ";
    cout << studentAttendance(s) << endl;

    cout << "Approach Two : ";
    cout << studentAttendance2(s);

    return 0;
}
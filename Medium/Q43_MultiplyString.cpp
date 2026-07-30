#include <iostream>
#include <vector>
using namespace std;

string MultiplyStrings(string num1 , string num2){
    
    if(num1 == "0" || num2 == "0") return "0";

    int n1 = num1.size();
    int n2 = num2.size();

    vector<int> res(n1 + n2 , 0);

    for(int i = n1 -1; i >= 0; i--){
        for(int j = n2 - 1; j >= 0; j--){
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + res[i + j + 1];

            res[i + j + 1] = sum % 10;
            res[i + j] += sum / 10;
        }
    }

    string ans = "";
    for(int val : res){
        if(!(ans.empty() && val == 0)){
            ans.push_back(val + '0');
        }
    }

    return ans;
}

int main(){

    string num1 = "10";
    string num2 = "20";

    cout << MultiplyStrings(num1 , num2);

    return 0;
}
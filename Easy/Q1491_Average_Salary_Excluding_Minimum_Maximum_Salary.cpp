#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double average(vector<int>& salary){

    sort(salary.begin() , salary.end());

    int n = salary.size();
    double sum = 0;

    for(int i=1; i<n-1; i++){
        sum += salary[i];
    }

    return sum/(n-2);
}

int main(){

    vector<int> salary = {2000 , 3000 , 1000 , 4000};

    cout << average(salary);

    return 0;
}
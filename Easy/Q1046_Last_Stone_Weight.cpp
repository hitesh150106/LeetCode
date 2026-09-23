#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int LastStone(vector<int> &stones){

    sort(stones.begin(),stones.end());

    while(stones.size() > 1){

        int last = stones.back();
        stones.pop_back();

        int secondLast = stones.back();
        stones.back();

        int differnce = last - secondLast;

        if(differnce > 0) stones.push_back(differnce);

        sort(stones.begin(), stones.end());
    }

    return stones.empty() ? 0 : stones[0];
}

int main(){

    vector<int> stones = {2,7,4,1,8,1};

    cout << LastStone(stones);

    return 0;
}
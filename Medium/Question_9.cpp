#include <iostream>
#include <vector>
using namespace std;

    int maxArea(vector<int>& height) {
        int lp = 0;
        int rp = height.size()-1;
        int max_area = 0;

        while(lp < rp){
            int w = rp-lp;
            int ht = min(height[lp],height[rp]);
            int area = w*ht;
            max_area = max(max_area , area);
            height[lp] < height[rp] ? lp++ : rp--;
        }
        return max_area;

    }

int main(){

    vector<int> height = {1,8,2,6,5,4,8,3,7};

    cout << maxArea(height);

    return 0;
}

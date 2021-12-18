#include <iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<math.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squares;
        int sqr;
        for (auto num:nums){
            sqr = pow(num,2);
            squares.push_back(sqr);
        }
        sort(squares.begin(),squares.end());
        return squares;
    }
};

int main(){
    Solution sol;

    vector<int> nums = {-4,-1,0,3,10}, ans;
    ans = sol.sortedSquares(nums);
    for(auto i:ans){
        cout << i <<endl;
    }
    return 0;
}
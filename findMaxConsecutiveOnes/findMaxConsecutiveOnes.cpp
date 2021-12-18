#include <iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, store = 0;
        for(auto num:nums){
            if(num == 1){
                count += 1;
                if (store < count){
                    store = count;
                }
            }
            if (num == 0){
                count = 0;
            }
        }
        return store;
    }
};

int main(){
    Solution sol;

    vector<int> nums = {1,0,1,1,1};
    int maxOnes;

    maxOnes = sol.findMaxConsecutiveOnes(nums);
 
    cout << maxOnes << endl;
    return 0;
}
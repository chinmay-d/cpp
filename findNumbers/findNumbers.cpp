#include <iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evenDigits = 0, size;
        string numStr;
        for(auto num:nums){
            numStr = to_string(num);
            size = numStr.size();
            if(size % 2 == 0){
                evenDigits += 1;
            }
        }
        return evenDigits;
    }
};

int main(){
    Solution sol;

    vector<int> nums = {2,7,11,15};
    int tot;
    tot = sol.findNumbers(nums);

    cout << tot << endl;
    return 0;
}
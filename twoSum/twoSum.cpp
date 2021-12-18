#include <iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        vector<int> v;
        for (auto i=0;i<nums.size();i++){
            if(m.find(target-nums[i])!=m.end()){
                v.push_back(m[target-nums[i]]);
                v.push_back(i);
                return v;
            }
            m[nums[i]]=i;
        }
        return v;
    }
};

int main(){
    Solution sol;

    vector<int> nums = {2,7,11,15}, vec;
    int target=9;
    vec = sol.twoSum(nums, target);
    // for(auto i:vec){
    //     cout << vec[i] <<endl;
    // }
    cout<<vec[0] << " " << vec[1] << endl;
    return 0;
}
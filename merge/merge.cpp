#include <iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<math.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums2.insert(nums2.end(),nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
    }
};

int main(){
    Solution sol;

    vector<int> nums1 = {1,2,3}, nums2 = {2,5,6};
    sol.merge(nums1, nums1.size(), nums2, nums2.size());
    for(auto i:nums2){
        cout << i <<endl;
    }
    return 0;
}
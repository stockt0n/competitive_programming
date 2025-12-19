#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans = nums;
        
        ans.reserve(size*2);

        for(int j = 0; j < size; j++) {
            ans.push_back(nums[j]);
        }
    return ans;
    }
};
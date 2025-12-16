#include <bits/stdc++.h>
using namespace std;

// leetcode 217
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // oops lol its not  a 2 ptr problem
        
        // lets just sort the array and compare the elements
        sort(nums.begin(), nums.end());
        int size = nums.size();

        for(int i = 1; i < size; ++i) {

            // for our understanding we create a separate variable, key, otherwise we can directly use i-1 in the condition check
            int key = i;

            if(nums[key-1] == nums[i]) {
                return true;
            }
        }
        return false;
    }
};
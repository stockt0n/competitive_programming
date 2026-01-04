#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // initiliaze the left pointer
        int left = 0;
        int ans = INT_MAX; // because 0 is also a valid ans, its the length of the subarray
        int sum = 0; // since we have to calculate the sum of the subarr
        int size = nums.size(); // last+1
        // start the loop and calculate the sum
        for(int right = 0; right < size; ++right) {
            // calculate the sum of the window
            sum += nums[right]; // sum will keep adding on untill
            while(sum >= target) {
                // now find the minimum length of the subarray
                ans = min(ans, right-left+1);
                // now update the sum as we have to update state based on the present window
                sum  -= nums[left];
                // move the left pointer forward to update the window 
                left++;
            }
        }
        return ans == INT_MAX? 0:ans;
    }   
};
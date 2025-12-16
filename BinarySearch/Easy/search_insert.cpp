#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // array is sorted in increasing order
        // if array has target value present, we return its index
        // if array does not have the target, we return the index where it should be inserted

        int left = 0;
        int right = nums.size()-1;

        while(left <= right) {
            int mid = left + (right-left) / 2; // find the middle point of the array

            if(nums[mid] == target) {
                return mid;
            }
            else if(nums[mid] < target) {
                left = mid + 1;
            } 
            else {
                right = mid - 1;
            }
        }
        return left;
    }
};
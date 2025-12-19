#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // create a unordered set since we only check the values
        unordered_set<int> duplicate;
        for(auto num: nums) {
            // we use count method to check for the key in the set
            if(duplicate.count(num)) {
                // key is found, return true
                return true;
            }
            // if count returns 0, means key is not there and we can insert it into the set
            duplicate.insert(num);
        }
        // key did not appear, return false
        return false;
    }
};
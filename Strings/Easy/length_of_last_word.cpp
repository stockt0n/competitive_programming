#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int last = s.length();
        int count = 0;
        for(int i = last-1; i < s.length(); i--) {
            char c = s[i];
            if(c!=' ') {
                count++;
            }
            else {
                if (count > 0) {
                    return count;
                }
            }
        }
        return count;
    }
};
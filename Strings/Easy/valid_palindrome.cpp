#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        // its a simple two pointer problem 
        int slow = 0;
        for(int fast = 0; fast < s.size(); fast++) {
            if(isalnum(s[fast])) {  
                s[slow++] = tolower(s[fast]);
            }
        }
        s.resize(slow);
        int first = 0, last = s.size()-1;
        while(first < last) {
            if(s[first] != s[last]) {
                return false;
            }
            first++;
            last--;
        }
        return true;
    }
};
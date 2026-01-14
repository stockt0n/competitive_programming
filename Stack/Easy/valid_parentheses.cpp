class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char, char> map = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for(const char& c: s) {
            if(map.find(c) == map.end()) {
                stk.push(c);
            }
            else if(!stk.empty() && map.at(c) == stk.top()) {
                stk.pop();
            }
            else {
                return false;
            }
        }
        return stk.empty();
    }
};
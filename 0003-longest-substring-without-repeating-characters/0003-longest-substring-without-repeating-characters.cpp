class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> mySet;
        int left = 0;
        int res = 0;

        for (int right = 0; right < s.length(); right++) {
            while (mySet.find(s[right]) != mySet.end()) {
                mySet.erase(s[left]);
                left++;
            }
            mySet.insert(s[right]);
            res = max(res, right - left + 1);
        }
        return res;
    }
};
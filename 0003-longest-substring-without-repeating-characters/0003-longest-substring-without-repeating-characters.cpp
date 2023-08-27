class Solution {
public:
    int lengthOfLongestSubstring(string s) {

    // Sliding window, expand if unique, contract if duplicate
    // Time: O(n)
    // Space: O(n)
        unordered_set<char> mySet;
        int left = 0;
        int res = 0;

        for (int right = 0; right < s.length(); right++) {
            while (mySet.find(s[right]) != mySet.end()) { 
// a while loop that continues to execute as long as the element s[right] is found in the std::set, i.e., as long as mySet.find(s[right]) doesn't return an iterator pointing to the "end" of the set.
                mySet.erase(s[left]);
                left++;
            }
            mySet.insert(s[right]);
            res = max(res, right - left + 1);   // we are storing max number of unique substr in the process
            // right - left + 1 we are doing +1 cause index start form 0
        }
        return res;
    }
}; 
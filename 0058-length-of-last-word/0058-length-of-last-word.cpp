class Solution {
public:
    int lengthOfLastWord(string s) {
// Time Complexity: O(n)
// Space Complexity: O(1)
        
        int count=0;
        int i = s.length()-1;
         // Skip trailing spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }
        // Count the length of the last word
        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }
        return count;
    }
};
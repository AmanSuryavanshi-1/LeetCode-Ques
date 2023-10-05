class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
// Time complexity: O(n+m) 
// Space complexity: O(1)
        
        int letterCount[26] = {0};

        // Count the frequency of characters in the magazine.
        for (int i = 0; i < magazine.size(); i++) {
            char c = magazine[i];
            letterCount[c - 'a']++;
        }

        // Check if it's possible to construct the ransomNote.
        for (int i = 0; i < ransomNote.size(); i++) {
            char c = ransomNote[i];
            int index = c - 'a';

            if (letterCount[index] > 0) {
                // Decrement the frequency if the character is available in magazine.
                letterCount[index]--;
            } else {
                // If the character is not available, return false.
                return false;
            }
        }
        // If all characters in ransomNote are constructible, return true.
        return true;
    }
};
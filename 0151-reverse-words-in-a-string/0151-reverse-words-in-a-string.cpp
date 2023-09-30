class Solution {
public:    
// Time complexity: O(n)
// Space complexity: O(n)
    
    string reverseWords(string s) {
    //        i is for char
    // j is looking for space
    //substr is used to extract the string (position,length)
        int i=0; 
        int n =s.length();
        string result;

        while(i<n){
            while(i<n && s[i] == ' ') i++; // Skip spaces until a non-space character is found.
            if(i>=n) break;
            int j = i+1; // Initialize a pointer to look for the end of the current word.
            while(j<n && s[j] != ' ') j++; // Continue until a space or the end of the string is found.
            string sub = s.substr(i, j-i);
            if(result.length() == 0) result = sub; 
            else result = sub+ " " + result; // adding current substring in front of previous substring
            i=j+1; 
        }
        return result; 
        

    }
};
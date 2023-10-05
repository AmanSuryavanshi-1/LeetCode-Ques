class Solution {
public:
    bool isSubsequence(string s, string t) {
// Time complexity: O(n+m) where n - length of s String, m - length of t String
// Space complexity: O(1)
        int i=0;
        int j=0;
        while(i<s.size() && j<t.size()){
            if(s[i] == t[j]){ i++; j++;}
            else j++;
        }
        if(i==s.size()) return true;
        else return false;
        }
};
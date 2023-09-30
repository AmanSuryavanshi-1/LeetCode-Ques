class Solution {
public:
    string reverseWords(string s) {
    //        i is for char
    // j is looking for space
    //substr is used to extract the string (position,length)
        int i=0; 
        int n =s.length();
        string result;

        while(i<n){
            while(i<n && s[i] == ' ') i++;
            if(i>=n) break;
            int j = i+1;
            while(j<n && s[j] != ' ') j++;
            string sub = s.substr(i, j-i);
            if(result.length() == 0) result = sub;
            else result = sub+ " " + result; // adding new substring in front of previous substring
            i=j+1;
        }
        return result;
    }
};
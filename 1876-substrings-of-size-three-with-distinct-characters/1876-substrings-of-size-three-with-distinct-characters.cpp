class Solution {
public:
    int countGoodSubstrings(string s) {
//  Time Complexity: O(n), where 'n' is the length of the input string s.
// Space Complexity: O(1)
        if(s.length() < 3) return 0;
    //     int res=0;
    //     for(int i=0; i<s.length()-2; i++){
    //         if(s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i+2]!=s[i]){
    //             res++;
    //         }
    //     }
    //     return res;
    int res=0;
    for(int i=1;i<s.size()-1;i++)
            if(s[i]!=s[i-1] && s[i]!=s[i+1] && s[i-1]!=s[i+1])res++;   
        return res;
    }
};

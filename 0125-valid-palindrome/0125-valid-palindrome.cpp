class Solution {
public:
    bool isPalindrome(string s) {
// Time complexity: O(n)
// Space complexity: O(n)  string 't' can be up to the same length as the input string 's' 
        
//         string t;
//         for(const auto& a:s)
//         {
//             if(a>='A' && a<='Z')
//             {
//                 char lowercase = tolower(a);
//                 t.push_back(lowercase);
//                 // t.pk(a-'A' + 'a');
//             }
//             else if(a>='a' && a<='z')
//             {
//                 t.push_back(a);
//             }
//             else if(a>='0' && a<='9')
//             {
//                 t.push_back(a);
//             }
//         }
        
        
//         string temp=t;
//         reverse(t.begin(),t.end());
//         if (t==temp) return true;     

//         return false;
        
// Time complexity: O(n)
// Space complexity: O(1)
        
        int start= 0;
        int end = s.length()-1;
        
        while(start<=end){
            // Skip non-alphanumeric characters at the beginning of the string.
            if(!isalnum(s[start])){ start++; continue;} 
            if(!isalnum(s[end])) {end--; continue;}
            if(tolower(s[start])!=tolower(s[end])) return false;
            else
                start++;
                end--;
        }
        return true;
    }
};
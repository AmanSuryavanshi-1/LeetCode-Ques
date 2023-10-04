class Solution {
public:
    bool isPalindrome(string s) {
// Time complexity: O(n)
// Space complexity: O(n)  string 't' can be up to the same length as the input string 's' 
        
        string t;
        for(const auto& a:s)
        {
            if(a>='A' && a<='Z')
            {
                char lowercase = tolower(a);
                t.push_back(lowercase);
                // t.pk(a-'A' + 'a');
            }
            else if(a>='a' && a<='z')
            {
                t.push_back(a);
            }
            else if(a>='0' && a<='9')
            {
                t.push_back(a);
            }
        }
        
        string temp=t;
        
        reverse(t.begin(),t.end());
        if (t==temp) return 1;     

        return 0;
    }   

};
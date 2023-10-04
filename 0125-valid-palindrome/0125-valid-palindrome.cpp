class Solution {
public:
    bool isPalindrome(string s) {
  
        std::string t;
        for(const auto& a:s)
        {
            if(a>='A' && a<='Z')
            {
                t.push_back(a-'A' + 'a');
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
class Solution {
public:
// Time complexity: O(n)
// Space complexity: O(n), as the vector 'v' can store up to 'n' words from the string 's'. 
//     The unordered_map 'm' and the set 'st' can also store up to 'n' unique words in the worst case.
// Notes 29
    
    bool wordPattern(string pattern, string s) {
        vector<string> v;
        string temp="";
        int i=0;
        while(i<s.size()){
        if(s[i]==' '){
            v.push_back(temp);
            temp="";
        }
        else temp+=s[i];

        i++;
    }
        v.push_back(temp);  // pushing last word
        
        if(pattern.size()!=v.size()) return false;
        
        unordered_map<char, string> m;
        set<string> st;
        for(int i=0; i<pattern.size(); i++){
            if(m.find(pattern[i]) != m.end()){  //pattern[i] is in map
                if(m[pattern[i]] != v[i]){      //pattern[i] is in map and its not equal to word [i]
                    return false;
                }
            }
            else{
                if(st.count(v[i]) > 0) return false;  //if already present in stack
            
            m[pattern[i]] = v[i];
            st.insert(v[i]);
            }
        } 
        return true;
    }
};

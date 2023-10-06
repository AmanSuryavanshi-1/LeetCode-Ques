class Solution {
public:
    bool isIsomorphic(string s, string t) {
         if (s.length() != t.length()) {
        return false; // If different lengths, they cannot be isomorphic.
    }
        
        unordered_map <char , char> mapST; // Map from s to t.
        unordered_map <char , char> mapTS; // Map from t to s.
        
        for(int i = 0 ; i<s.length() ; i++) {
            char c1= s[i];
            char c2= t[i];
        
            if((mapST.find(c1) != mapST.end() && mapST[c1] != c2) || 
               (mapTS.find(c2) != mapTS.end() && mapTS[c2] != c1)){
                return false;
            }
            mapST[c1]=c2; // Map c1 from s to c2 in t.
            mapTS[c2]=c1; // Map c2 from t to c1 in s.
        }
        return true;
    }
};
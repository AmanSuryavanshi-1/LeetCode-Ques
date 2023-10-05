class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
// Time complexity: O(n+m) 
// Space complexity: O(1) // as map is taking only 26 alphabets
        
//         for(int i=0;i<s.size();i++){
//             mp[s[i]]++;
//         }

//         for(int i=0;i<t.size();i++){
//             if(mp[t[i]]>0) mp[t[i]]--; // if have decrement its count by one from map
//     // dont have suffucient character return false you can't make it.
//             else return false;
//         }
//    // you can make it
//         return true;
//     }
        unordered_map<char,int> mp(26);
        
        for(int i=0; i<magazine.size(); i++){
            mp[magazine[i]]++;  //update the character counts in the mp
        }
        
        for(int i=0; i<ransomNote.size(); i++){
            if(mp[ransomNote[i]]>0) mp[ransomNote[i]]--; //it checks if there are positive occurrences of that character in the mp map
            else return false;
        }
        return true;
    }
};
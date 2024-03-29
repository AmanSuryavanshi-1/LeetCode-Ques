class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
// Time complexity: O(m * n * log(n)),'m' is the length of the longest string in 'strs'. and nlogn for sort
//Space complexity: O(1)
        
       int n = strs.size();
        if(n==0) return "";
        
        string ans  = "";  //intializing empty string
        sort(begin(strs), end(strs)); 
        
        string a = strs[0];
        string b = strs[n-1];
        
        for(int i=0; i<a.size(); i++){
            if(a[i]==b[i]){
                ans = ans + a[i];
            }
            else{
                break;
            }
        }
         
        
        return ans;
        
    }
};
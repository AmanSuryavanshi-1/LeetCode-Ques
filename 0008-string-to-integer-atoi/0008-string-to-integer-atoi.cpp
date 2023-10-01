class Solution {
public:
    int myAtoi(string s) {
// Time complexity: O(N)
// Space complexity: O(1)
        
        int i=0;
        int n=s.size();
        double ans=0;     //using double instead of long bcz range of double is more
        
        while(i<n && s[i]==' ') i++;  // skipping space characters at the beginning
        
        int positive =0, negative=0; 
        if(i<n && s[i]=='+') {
            positive++;    // number of positive signs at the start in string
            i++;
        }
        if(i<n && s[i]=='-'){
            negative++;    // number of negative signs at the start in string
            i++;
        }
       
        

        while(i<n && s[i]>='0' && s[i]<='9') {
            ans = ans*10 + (s[i]-'0'); // (s[i] - '0') is converting character to integer
            i++;
        }
         if(negative>0) {ans = -ans;}  // if negative sign exist
        if(positive>0 && negative>0) return 0;  // if both +ve and -ve sign exist, Example: +-12 then ans =0
        
        if(ans>INT_MAX) return INT_MAX; // if ans > 2^31 - 1
        if(ans<INT_MIN) return INT_MIN; // if ans < 2^31

        return static_cast<int>(ans);
    }
    
};
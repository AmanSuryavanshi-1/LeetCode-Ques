class Solution {
public:
    int myAtoi(string s) {
//         int ans=0;
//         int i;
//         while(i<s.length()){
//             // if(s[i]>='a' && s[i]<='z' || s[i]==' ') i++;
//             if(isdigit(s[i])) ans+='s[i]';
//             else if(s[i]=='-') ans+='-';
//             else 
//                 i++;
                
//         }
//         return (int)ans;
        int i=0;
        int n=s.size();
        double ans=0;
        
        while(i<n && s[i]==' ') i++;
        
        int positive =0, negative=0;
        if(i<n && s[i]=='+') {
            positive++;
            i++;
        }
        if(i<n && s[i]=='-'){
            negative++;
            i++;
        }
       
        

        while(i<n && s[i]>='0' && s[i]<='9') {
            ans = ans*10 + (s[i]-'0');
            i++;
        }
         if(negative>0) {ans = -ans;}
        if(positive>0 && negative>0) return 0;
        
        if(ans>INT_MAX) return INT_MAX;
        if(ans<INT_MIN) return INT_MIN;

        return static_cast<int>(ans);
    }
    
};
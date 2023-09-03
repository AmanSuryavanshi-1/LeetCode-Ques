class Solution {
public:
    bool isPalindrome(int n) {
        
         if (n < 0) {
            return false;
        }
        
        long long int remainder=0,Reverse=0;
        int newN = n;
       
        while(n!=0){
            remainder=n%10;
            n=n/10;
            Reverse=Reverse*10+remainder;
        }    
        return (newN == Reverse);    
        // if(newN == Reverse) return true;
    }
};
class Solution {
public:
    bool isPalindrome(int n) {
        
         if (n < 0) {
            return false;
        }
        
        long long int r=0,R=0;
        int newN = n;
       
        while(n!=0){
            r=n%10;
            n=n/10;
            R=R*10+r;
        }    
        return (newN == R);    
        // if(newN == R) return true;
    }
};
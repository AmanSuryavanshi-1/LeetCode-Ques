class Solution {
public:
    int reverse(int x) {
        int r =0,remainder=0 ; //r is reverse
        
        while(x){
            
             if(r>INT_MAX/10 || r<INT_MIN/10) return 0;
        // check range if r is outside the range then return 0  
            remainder = x%10;
            x = x/10;
            r = r*10+remainder;
        }
        
        return r;
    }
}; 
        
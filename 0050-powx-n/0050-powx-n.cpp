class Solution {
public:
    double myPow(double x, int n) {
// Time: O(log2(n))
// Space: O(1)
        if(n < 0) {
            x = 1 / x;
        } 
        
        long num = abs(n);
        
        double pow = 1;
        
        while(num){ // equivalent to while(num != 0)
            if(num % 2 != 0) {   // Check if num is odd
                pow *= x;
            }
            x *= x;  // Regardless of whether num is even or odd, square x
            num = num/2;
        }
        
        return pow;
    }
};
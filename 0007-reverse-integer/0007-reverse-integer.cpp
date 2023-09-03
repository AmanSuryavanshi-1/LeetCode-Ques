class Solution {
public:
//     int reverse(int x) {
//         int r =0,remainder=0 ; //r is reverse
        
//         while(x){
            
//              if(x>INT_MAX/10 || x<INT_MIN/10) return 0;
//         // check range if r is outside the range then return 0  
//             remainder = x%10;
//             x = x/10;
//             r = r*10+remainder;
//         }
        
//         return r;
//     }
// }; 
         int reverse(int x) {
        int r=0;      // decleare r 
        while(x){
         if (r>INT_MAX/10 || r<INT_MIN/10) return 0; // check 32 bit range if r is outside the range then return 0 
         r=r*10+x%10; // find remainder and add its to r
         x=x/10;     // Update the value of x
        } 
        return r;  // if r in the 32 bit range then return r
    }
}; 
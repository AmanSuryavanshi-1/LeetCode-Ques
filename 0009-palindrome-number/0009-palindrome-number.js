/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = (n) => {


// Optimized Way
    if (n < 0) {
            return false;
        }
        var remainder=0,Reverse=0;
        const newN = n;
       
        while(n!=0){
            remainder=n%10;                     // 1    (12->2)        1
            n=Math.floor(n/10);                             // 12      1           1
            Reverse=Reverse*10+remainder;       // 1    (10+2=12)   (120+1)=121
        }    
        return (newN == Reverse);    
        // if(newN == Reverse) return true;
    }

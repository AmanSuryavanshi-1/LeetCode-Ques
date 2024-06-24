/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = (n) => {

// Approach 1
return n === +n.toString().split("").reverse().join("");
// 123 => "123" => ["1","2","3"] => ["3","2","1"] => ( 3.2.1 -> 321 ) 
// + n the start converts the string into a number if possible
// console.log(+"10"); 10
// console.log(+"a"); NAN

// Optimized Way
    // if (n < 0) {
    //         return false;
    //     }
    //     var remainder=0,Reverse=0;
    //     const newN = n;
       
    //     while(n!=0){
    //         remainder=n%10;                     // 1    (12->2)        1
    //         n=Math.floor(n/10);                             // 12      1           1
    //         Reverse=Reverse*10+remainder;       // 1    (10+2=12)   (120+1)=121
    //     }    
    //     return (newN == Reverse);    
    }

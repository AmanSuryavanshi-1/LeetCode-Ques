/**
 * @param {number} n
 * @return {number}
 */
var fib = function(n) {
// Approach 1
// Time Complexity - O(N)
// Space Complexity - O(1)

    // if(n<2) return n;

    // let a=0,b=1,sum=0;
    // for(let i=2; i<=n; i++){
    //     sum = a+b;
    //     a = b;
    //     b = sum;
    // }
    // return sum;

// Approach 2
// Time Complexity - O(N)
// Space Complexity - O(N)
    const arr = [0,1];
    for(let i =2; i<=n; i++){
         arr.push(arr[i-1]+arr[i-2]);
    }
    return arr[n];  
};
class Solution {
public:
    int fib(int n) {
// Time Complexity - O(N)
// Space Complexity - O(1)
        if(n < 2) 
            return n;
        
        int a=0, b=1, sum=0;
        
        for(int i=2; i<=n;i++){
            sum = a + b;
            a=b;
            b=sum;
        }
        return sum;
    }
};


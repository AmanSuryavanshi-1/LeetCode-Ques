class Solution {
public:
    int addDigits(int num) {  
    
// Time Complexity: O(log10(num))
// Space Complexity: O(log10(num))
//         int sum =0;
//         while(num > 9){
//             while(num)
//             {
//                 sum+=(num%10);
//                 num/=10;
//             }
//             num=sum;
//             sum=0;
//         }  
//         return num;

      int sum=0;
        while(num)
        {
            sum+=(num%10);
            num/=10;
        }
        if(sum<10)
            return sum;
        else
            return addDigits(sum);
// Time Complexity: O(log10(num))
// Space Complexity: O(1)
// O(log10(num)) represents a logarithmic time complexity, which is typically more efficient than linear time complexity O(n). 
    }
};
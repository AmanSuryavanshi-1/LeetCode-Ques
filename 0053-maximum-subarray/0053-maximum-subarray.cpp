class Solution {
public:
    
//     Time complexity = O(n)
//     Space = O(1)
    // KADEN's Algo
        
    int maxSubArray(vector<int>& nums) {
        
         int maxSum = INT_MIN; // for maximum value
        int curSum = 0; // for larger sum
        
        for(int i = 0; i< nums.size();i++){
            
            curSum += nums[i]; 
            if (curSum > maxSum){
                maxSum = curSum;
            }
            if (curSum < 0){
                // if sum become -ve then we should discard till that point and fresh start to find max value
                curSum = 0;
            }
        }
        return maxSum;
    }
};
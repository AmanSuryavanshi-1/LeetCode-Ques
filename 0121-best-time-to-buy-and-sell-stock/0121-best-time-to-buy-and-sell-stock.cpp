class Solution {
public:
    int maxProfit(vector<int>& prices) {
    
        // int maxProfit = 0;
        // int minSoFar = prices[0];
        // for(int i=0; i<prices.size(); i++){
        //     minSoFar=min(minSoFar,prices[i]);
        //     int profit = prices[i]-minSoFar;  
        //     maxProfit= max(maxProfit,profit);
        // }
        // return maxProfit;
        
        // Time O(n)
        // space O(1)
    // }
    
    // another way to write above code
// Time: O(n)
// Space: O(1)
    
    // int maxP=0;
    // int l=0, r=0,profit=0;  // l is for buy and r is for sell
    
    int maxP = 0;
        int l=0;

        for (int r = 0; r < prices.size(); r++) {
            if (prices[l] < prices[r]) {
                int profit = prices[r] - prices[l];
                maxP = max(maxP, profit);
            } else {
                l=r;
            }
        }

        return maxP;
    }
    
};
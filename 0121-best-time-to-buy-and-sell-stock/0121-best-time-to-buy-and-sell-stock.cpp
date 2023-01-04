class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int j = INT_MAX;; // least price found in array
        int k= 0; //profit if sold today 
        int mp= 0; //max profit that can be acheived
        
        for(int i=0; i<prices.size(); i++){
            if(prices[i]<j){ // if we found new buy value which is more smaller then previous one
                j=prices[i]; // updating least price
            }
            k= prices[i]-j; // calculating profit if sold today, price at particular day - least price
            
            if(mp<k){  // finding max profit acheived by comparing k of each day
                mp=k; // update maxl profit
            }
        }
         return mp;
        
        // Time O(n)
        // space O(1)
    }
};
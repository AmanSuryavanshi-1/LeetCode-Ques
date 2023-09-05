class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res=0;
        for(int i=0; i<accounts.size();i++){
            int sum=0;
            for(int j=0; j<accounts[i].size(); j++){
            sum += accounts[i][j]; // ij 01 02 03 (next iteration) = 11 12 13
                }
            res = max(res,sum);
        }
        
    return res;
    }
};
//Time Complexity: O(m * n)
//Space Complexity: O(1)
// 2D array
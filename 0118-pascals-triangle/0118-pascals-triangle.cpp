class Solution {
public:

// Time complexity: O(n^2)
// Space complexity: O(n^2)
    
    int nCr(int n, int r){
        long long res=1;
        
        for(int i=0; i<r; i++){
            res *= (n-i);
            res = res/(i+1);
        }
        return res;
    }
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans; // Initialize a 2D vector to store the triangle
        
        for(int row=1; row<=n; row++){
            vector<int> tempLst; // Temporary list to store elements of the current row
            for(int col=1; col<=row; col++){
            int ans = nCr(row - 1, col - 1);
            tempLst.push_back(ans); // Add the coefficient to the current row
            }
            
            ans.push_back(tempLst); // Add the current row to Pascal's Triangle
        }
        return ans;
    }
};
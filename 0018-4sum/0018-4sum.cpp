class Solution {
public:
    // Time Complexity: O(N^3)
    // space: O(N)
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
 set<vector<int>>ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
               long int sum= (long int)target-nums[i]-nums[j];
                int l=j+1; int r=n-1;
                while(l<r){
                    int x = nums[l]+nums[r];
                    int y = nums[l], z= nums[r] ;
                    if(x==sum){
                        ans.insert({nums[i],nums[j],nums[l],nums[r]});
                        while(l<r && nums[r]==z)r--;
                        while(l<r && nums[l]==y)l++;
                    }    
                    else if(x<sum)
                        l++;
                    else r--;

                }
               
            }
        }
        vector<vector<int>>res(ans.begin(),ans.end());
        return res;
    }
};
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
// Time Complexity: O(n^2)
// Space Complexity: O(1)
        // int count =0;
        // for(int i=0; i<nums.size(); i++){
        //     for(int j=i+1; j<nums.size(); j++){
        //         if(nums[i] == nums[j]) count++;
        //     }
        // }
        // return count;
        
// Time Complexity: O(n)
// Space Complexity: O(n)
        
        unordered_map<int,int> mp;
        int count =0;
        for (int i = 0; i < nums.size(); i++) {
        if (mp.find(nums[i]) != mp.end()) {
            count += mp[nums[i]];
            mp[nums[i]]++;
        } else {
            mp[nums[i]] = 1;
        }
    }
    
    return count;

    }
};
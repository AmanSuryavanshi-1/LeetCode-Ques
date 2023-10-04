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
            // Check if 'num' is found in the 'mp' (unordered map).

            count += mp[nums[i]];
            // If 'nums[i]' is found, increment 'count' by the value associated with 'nums[i]' in the map.
            mp[nums[i]]++;
            // Increment the count in the map for 'num' to indicate another occurrence.
        } else {
            // If 'num' is not found in the map:
            mp[nums[i]] = 1;
            // Initialize the count for 'num' in the map to 1, indicating that we've seen it once.
        }
    }
    
    return count;

    }
};
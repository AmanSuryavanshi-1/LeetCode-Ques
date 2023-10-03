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
       for (int num : nums) {
        // For each element 'num' in the 'nums' vector:

        if (mp.find(num) != mp.end()) {
            // Check if 'num' is found in the 'mp' (unordered map).

            count += mp[num];
            // If 'num' is found, increment 'count' by the value associated with 'num' in the map.
            // This counts the identical pairs that 'num' forms with previous occurrences in 'nums'.

            mp[num]++;
            // Increment the count in the map for 'num' to indicate another occurrence.
        } else {
            // If 'num' is not found in the map:

            mp[num] = 1;
            // Initialize the count for 'num' in the map to 1, indicating that we've seen it once.
        }
    }

    return count;
    }
};
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // // Time Complexity --> O(n) // where n is the size of the array
// // Space Complexity --> O(n) // we are using unordered map from our side
        int n = nums.size();
        std::unordered_map<int, int> mp;
        mp[0] = 1;  // Assigning sum=0 and remainder(rem) = 1 initially
        int ans = 0;
        int sum = 0;
        
        for(int i = 0; i < n; i++) {
            sum += nums[i];
            int rem = sum % k;
            
            if (rem < 0) {
                rem += k;     // if remainder is less then 0 means -ve add k to it. To convert it to +ve
            }
            if(mp.find(rem) != mp.end()) {  //if there is key == rem in map find till mp.end
                ans = ans + mp[rem];            // and if it is there add old frequencies to the answer
                mp[rem]++;                 // increasing frequency in the map
            }
            else {
                mp[rem] = 1;  // Assigning rem with frequency 1
            }
        }
        
        return ans;
    }
};






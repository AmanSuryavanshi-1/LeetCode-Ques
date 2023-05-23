// // Time Complexity --> O(n) // where n is the size of the array
// // Space Complexity --> O(n) // we are using unordered map from our side

class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size(); // take the size of the array
        
        int sum[n]; // make an array to store the prefix sum
        
        sum[0] = arr[0]; // for the element at index zero, it is the same
        
        // computing the prefix sum
        for(int i = 1; i < n; i++) {
            sum[i] = arr[i] + sum[i - 1];
        }
        
        unordered_map<int, int> mp; // declare an unordered map
        
        int ans = 0; // to store the number of subarrays having sum as 'k'
        for(int i = 0; i < n; i++) { // traverse the array
            if(sum[i] == k) { // if it already becomes equal to k, then increment ans
                ans++;
            }
            
            // find whether (sum[i] - k) is present in the map or not
            if(mp.find(sum[i] - k) != mp.end()) {
                ans += mp[sum[i] - k]; //if yes, then add it to our answer 
            }
            
            mp[sum[i]]++; // put prefix sum into our map
        }
        
        return ans; // return the answer
    }
};

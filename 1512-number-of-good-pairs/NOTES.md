```
if (mp.find(nums[i]) != mp.end()) {
// Check if 'num' is found in the 'mp' (unordered map).
​
count += mp[nums[i]]; //count incremented
// If 'nums[i]' is found, increment 'count' by the value associated with 'nums[i]' in the map.
mp[nums[i]]++;       //count for num incremented
// Increment the count in the map for 'num' to indicate another occurrence.
} else {
// If 'num' is not found in the map:
mp[nums[i]] = 1;
// Initialize the count for 'num' in the map to 1, indicating that we've seen it once.
}
```
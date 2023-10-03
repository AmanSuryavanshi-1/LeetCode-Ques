class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
         int k = 0, n = nums.size(), i = 0;
        while(i<n){
            int curr = nums[i];
            int count = 0;
            while(i< n && nums[i] == curr){
                count++;
                i++;
            }
            if(count > 1){
// If count > 1, it means we should keep at most two occurrences. So, we add curr to the modified nums array twice at positions k and k+1, and then increment k by 2.

                nums[k] = curr;
                k++;
                nums[k] = curr;
                k++;
            }
// If cnt is not greater than 1, it means there's only one or zero occurrence of the current element, so we add it to the modified nums array once at position k and increment k by 1
            else{
                nums[k] = curr;
                k++;
            }
        }
        return k;
        
// Time Complexity: O(n)
// Space Complexity: O(1)
            
//         int i = 0;
//         int n = nums.size(); 

//         for (int j = 0; j < n; j++) {
// // 1. i is at the beginning (i == 0).
// // 2. i is at the second element (i == 1).
// // 3. The current element nums[j] is different from the element two positions back (nums[i - 2] != nums[j]).
//             if (i < 2 || nums[i - 2] != nums[j]) {
// // If any of the above conditions is true, it means the current element nums[j] is not a duplicate.
//                 nums[i] = nums[j];
//                 i++;
//             }
//         }
//         return i;
    }
};
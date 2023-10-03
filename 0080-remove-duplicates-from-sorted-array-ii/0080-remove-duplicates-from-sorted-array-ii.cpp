class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        //  int k = 0, n = nums.size(), i = 0;
        // while(i<n){
        //     int curr = nums[i];
        //     int cnt = 0;
        //     while(i< n && nums[i] == curr){
        //         cnt++;
        //         i++;
        //     }
        //     if(cnt > 1){
        //         nums[k] = curr;
        //         k++;
        //         nums[k] = curr;
        //         k++;
        //     }
        //     else{
        //         nums[k] = curr;
        //         k++;
        //     }
        // }
        // return k;
        
         int i = 0;
        int n = nums.size(); 

        for (int j = 0; j < n; j++) {
            // 1. i is at the beginning (i == 0).
            // 2. i is at the second element (i == 1).
            // 3. The current element nums[j] is different from the element two positions back (nums[i - 2] != nums[j]).
            if (i < 2 || nums[i - 2] != nums[j]) {
                // If any of the above conditions is true, it means the current element nums[j] is not a duplicate.
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};
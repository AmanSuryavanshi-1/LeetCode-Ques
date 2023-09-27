class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //Method 1 Using STL
        
// Time complexity: O(n * log(n)) This is because the next_permutation function from the C++ STL has a time complexity of O(n * log(n)) in the worst case.
// Space complexity: O(1)
        
        // next_permutation(nums.begin(), nums.end());
        
        // Method 2 
// Time complexity: O(n)
// Space complexity: O(1)
        int index = -1;
        int n = nums.size();
        
        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
            index = i;
            break;
            }
        }
        
        for(int i=n-1; i>=index && index != -1 ; i--){
            if(nums[i] > nums[index]){
                swap(nums[i], nums[index]);
            break;
            }
        }
        
         reverse(nums.begin() + index +1, nums.end());
    }
};

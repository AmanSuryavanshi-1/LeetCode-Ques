class Solution {
public:
    bool canJump(vector<int>& nums) {
        // Space Complexity: O(1)
        // Time Complexity: O(n)
        int n = nums.size();
        int goal = n - 1;
        for (int i = n - 2; i >= 0; i--) { 
            if (i + nums[i] >= goal) {
                goal = i;
            }
        }
        return (goal == 0);
    }
};
//notes

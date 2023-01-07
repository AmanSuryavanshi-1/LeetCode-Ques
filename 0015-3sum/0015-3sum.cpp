class Solution {
public:
// Time Complexity: O(N^2)
// space: O(n)
    vector<vector<int>> threeSum(vector<int>& nums) {    
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
        
        int target = -nums[i];
        int front = i + 1;
        int back = nums.size() - 1;
        
        // Processing duplicates of Number 1
        while (i+1 < nums.size() && nums[i + 1] == nums[i]) 
            i++;

        while (front < back) {

            int sum = nums[front] + nums[back];
            
            // Finding answer which start from number nums[i]
            if (sum == target){
                vector<int> triplet = {nums[i], nums[front], nums[back]};
                ans.push_back(triplet);
                
                //while loop is used to avoid array containing same elements bcz duplicate is present in the given array
                // Processing duplicates of Number 2
                // Rolling the front pointer to the next different element forwards
                while (front < back && nums[front] == triplet[1]) front++;

                // Processing duplicates of Number 3
                // Rolling the back pointer to the next different element backwards
                while (front < back && nums[back] == triplet[2]) back--;
            }
            
                

            else if (sum > target)
                back--;

            else 
            front++;
        }        

    }
    
    return ans;
    
}

};
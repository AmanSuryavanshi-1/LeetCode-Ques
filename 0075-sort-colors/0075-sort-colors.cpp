class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0, l = 0, r = nums.size()-1;
        while(l<=r){
        if (nums[l]==0){
            swap(nums[i++] , nums[l++]);
// if 0 is already in starting increament both i and l 
// swap is used when 1 is at first index
        }
        else if(nums[l]==2){
            swap(nums[l] , nums[r--]);
            //putting 2 in the last
        }
        else
        l++;
            }
    }
};
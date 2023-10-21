class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1;
        //starting from index 1 bcz it is a sorted array so the first element will remain same
        for(int i=1; i<nums.size(); i++){
            if(nums[i]!=nums[i-1]){
                nums[j++]=nums[i];
                }
        }
        return j;
    }
};
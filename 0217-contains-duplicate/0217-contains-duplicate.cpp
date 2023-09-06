class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // sort(nums.begin,nums.end);
    //         for(int i=0,j=0; i<nums.size(); i++){
    //         if(nums[i]==nums[j]){ 
    //             j++; 
    //             return false;
    //         }
    // }
        // Set don't contain duplicate elment 
        // set<int> myset;
        // if (nums.size() > myset.size()) return true; 
        // else return false;
   
        return nums.size() > set<int>(nums.begin(),nums.end()).size();
    }
};
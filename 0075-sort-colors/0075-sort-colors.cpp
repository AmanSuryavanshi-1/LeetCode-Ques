class Solution {
public:
    void sortColors(vector<int>& nums) {
// Method 1
// Time complexity: O(nlogn)
// Space complexity: O(1)
        // return sort(nums.begin(), nums.end());
        
// Method 2
// Time complexity: O(n)
// Space complexity: O(1)
        int low=0, mid= 0, high=nums.size()-1;
        while(mid <= high){
        if(nums[mid] == 0){ 
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }

        else if(nums[mid] == 1) mid++;
        else{                                   // if(nums[mid] == 2) 
            swap(nums[mid],nums[high]);
            high--;
        }
      }
    }
};

         
                                
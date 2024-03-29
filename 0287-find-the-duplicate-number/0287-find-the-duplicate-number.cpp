// 1) Using Sort 
// Time- O(n log n) space-O(n)

class Solution1 {
public:
    int findDuplicate(vector<int>& nums) {
       sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1])
                return nums[i];
        }
        return -1;  
    }
};

// 2) using another vector
// => take a cnt vector of size num.size() & initilise all it value to 0.
// => Iterate the nums and store the cnt of every element in cnt array.
// => Now traverse the cnt(count) vector if any value in cnt vector is greater than 1 , return i.

// Time- O(n) space-O(n)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
		// initialise cnt vector of size nums with 0
        vector<int> cnt(nums.size(),0);
        int ind =  0;
		
		// store the cnt of each value in the cnt vector
        for(int i = 0; i<nums.size(); i++)
        {
            cnt[nums[i]]++;
        }
        
        for(int i = 0; i<cnt.size(); i++)
        {
			// if cnt[i] > 1
			// this means that element occur more than once in nums
			// we have to return i
            if(cnt[i] > 1)
            {
                ind  = i;
                break;
            }
        }
        
        return ind;
    }
	// for github repository link go to my profile.
};

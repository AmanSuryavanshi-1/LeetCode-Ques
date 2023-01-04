class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int> v; //vector for storing index at map & at given array 
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end()) //checking if required no. is present in end of map or not
            {
                v.push_back(m[target-nums[i]]); 
                v.push_back(i);
                return v;
            }
            else
                m[nums[i]]=i;
        }
       return v;   
    }
};
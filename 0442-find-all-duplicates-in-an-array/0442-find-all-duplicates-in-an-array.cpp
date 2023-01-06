// #Approach 1
// Time Complexcity - O(N*N) <=Give You TLE
// Space Complexcity - O(1)

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans; //vector for storing dulpicate 
    //     for(int i=0;i<nums.size();i++){
    //         for(int j=i+1;j<nums.size();j++){
    //             if(nums[i]!=nums[j])continue;
    //             else{
    //                 ans.push_back(nums[i]);
    //                 break;
    //             }
    //         }
    //     }
    //     return ans;
    
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){ 
            int n = nums[i]; // storing value in n from array 
            mp[n]++; // storing n in the map
        }
        for(auto j:mp) // traversing through map
            if(j.second==2){
                ans.push_back(j.first);
            }
        return ans;
    }
};
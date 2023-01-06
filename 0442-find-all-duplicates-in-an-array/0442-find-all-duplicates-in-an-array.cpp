class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans; //vector for storing dulpicate 
                
// #Approach 3 -Best
// Time Complexcity - O(N)
// Space Complexcity - O(1)
       for(int i=0; i<nums.size(); i++){
           // take the absolute value of nums[i] bcz index are not -ve
           if(nums[abs(nums[i])-1]>0)//reaching here for the first time
           {
               nums[abs(nums[i])-1] = -1*nums[abs(nums[i])-1]; // multiply it by -1
           }
           else 
               ans.push_back(abs(nums[i]));// if the element at the index abs(nums[i])-1 is not positive, add abs(nums[i]) to the ans vector
        }
        return ans;
        

// #Approach 1
// Time Complexcity - O(N*N) <=Give You TLE
// Space Complexcity - O(1)
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
    
// #Approach 2
// Time Complexcity - O(N)
// Space Complexcity - O(N)
    //     unordered_map<int,int> mp;
    //     for(int i=0;i<nums.size();i++){  
    //         mp[nums[i]]++;  // storing value in n from array
    //     }
    //     for(auto j:mp) // traversing through map
    //         if(j.second==2){
    //             ans.push_back(j.first);
    //         }
    //     return ans;
    
    }    
};
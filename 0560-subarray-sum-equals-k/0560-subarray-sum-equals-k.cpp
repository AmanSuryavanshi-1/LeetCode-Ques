class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       
        
// Time Complexity --> O(n ^ 2)
// Space Complexity --> O(1) 
        
//         int count = 0;
//         for (int i=0; i<nums.size();i++){
//             int sum = nums[i];
//             if(sum == k) // if element itself equal to k, then also increment count
//                 count++;
            
//             for (int j= i+1; j<nums.size();j++){
//             sum+=nums[j];
//             if(sum==k )
//             {
//                 count++;
//             }
//  }
//             }
// return count;
//     }
// };
        
              
// Time Complexity --> O(n)
// Space Complexity --> O(n)   //hashmap is used
         unordered_map<int,int> m;
        int sum=0,count=0;
        
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            if(sum == k) count++;
            
            if(m.find(sum - k) != m.end()){
                count += m[sum - k];
            }
            
            if(m.find(sum)!=m.end()){
                m[sum]++;
            }
            else{
            m[sum]++; // put sum into our map
            }
            }
        return count;
    }
};

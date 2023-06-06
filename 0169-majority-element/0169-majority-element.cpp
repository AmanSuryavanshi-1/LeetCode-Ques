class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Time complexity:O(n)
        // Space complexity:O(n)
        
//         int n=(nums.size())/2;
//         map<int,int>map;
//         for(int i=0;i<nums.size();i++){
//             map[nums[i]]++;
//             if(map[nums[i]]>n){
//                 return nums[i];
//             }
//         }
//        return -1; 
//     }
        
        
        
      int n = nums.size();
int ele = nums[0];
int count = 0;

for(int i = 0; i < n; i++){
    if(count == 0){
        ele = nums[i];
    }
    count += (ele == nums[i]) ? 1 : -1;
}

return ele;
    }
    //notes
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
// Approach 1 -> Brute force 
//     Time -> O(n^2) Space->O(N)
        // vector<int>v;
        // for(int i=0; i<nums.size(); i++){
        //     for(int j=1; j<nums.size(); j++){
        //     if(nums[i]+nums[j]==target){
        //         v.push_back(i);
        //         v.push_back(j);
        //     }
        //         }
        // }
        // return v;
        
// Approach 2:- Best if array is sorted cuz taking logn extra time for sort and can be used to find 3sum4sum
//         Time-O(nlogn) 
//         Space-O(n)
//         vector<pair<int,int>> v;
        
//         for(int i=0;i<nums.size(); i++){
//             v.push_back({nums[i],i});
//         }
//         sort(v.begin(),v.end());
//         int front=0; 
//         int back=nums.size()-1;
        
//         while(front<back){
//            int sum = v[front].first+v[back].first;
            
//             if(sum == target) return {v[front].second,v[back].second};
//                 else if(sum>target) back--;
//                 else front++;
            
//         }
//         return{-1,-1};
        
        //         #Approach 2 using maps-Best if array is not sorted
//         Time-O(n)
//         Space-O(n)
        
        unordered_map <int,int> m;
        
        for(int i=0; i<nums.size(); i++){
            if( m.find(target-nums[i]) == m.end() ){
                m[nums[i]]=i;
            }
            else return {m[target-nums[i]], i};
        }
        
                return {-1, -1};

    }
};
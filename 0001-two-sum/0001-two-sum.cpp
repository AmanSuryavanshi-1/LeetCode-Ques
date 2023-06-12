class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      
//         #Approach 3:- Best if array is sorted cuz taking logn extra time for sort and can be used to find 3sum4sum
//         Time-O(nlogn) 
//         Space-O(n)
        
        vector<pair<int,int>> v;
             
        
        for(int i=0; i<nums.size();i++){
            v.push_back({nums[i],i});
        }
           sort(v.begin(),v.end());
           int front= 0;
           int back= nums.size()-1;
            
        while(front<back){
            int sum=v[front].first+v[back].first; //adding element soring at first in vetor
            
            if(sum==target)return {v[front].second,v[back].second};  //returning indeces storing at second in vetor
               else if(sum>target) back--;
               else front++;
    }
        return {-1,-1};
        
        
//         #Approach 2 using maps-Best if array is not sorted
//         Time-O(n)
//         Space-O(n)
            
//         vector<int> v; //vector for storing index at map & at given array 
//         unordered_map<int,int> m;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(m.find(target-nums[i])!=m.end()) //checking if required no. is present in end of map or not
//             {
//                 v.push_back(m[target-nums[i]]); 
//                 v.push_back(i);
//                 return v;
//             }
//             else
//                 m[nums[i]]=i;
//         }
//        return v;   
    }
};

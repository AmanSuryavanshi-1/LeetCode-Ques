class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       // Brute Force:
               // 1.Merge Both Array
              // 2.Sort them
             // 3.Find Median
            // TIME COMPLEXITY: O(n)+O(nlogn)+O(n)
            // SPACE COMPLEXITY: O(1)
        
        vector<int> v;
         // store the array in the new vector array
        
        for(auto i:nums1) v.push_back(i); // O(n1)
        
        for(auto i:nums2) v.push_back(i); // O(n2)
     
        // Sort the array to find the median
        sort(v.begin(),v.end());  // O(nlogn)
        
        // Find the median and Return it
        int n=v.size();  // O(n)
        
    
            // if length is even
            if(n%2 == 0) return (v[(n/2)-1]+v[n/2])/2.0;       
            else                        // if length is odd
                 return v[n/2]; //middle element-1 + middle element
        
        
    }
};
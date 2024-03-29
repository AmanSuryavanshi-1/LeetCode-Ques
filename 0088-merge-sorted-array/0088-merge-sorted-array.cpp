class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
// Time Complexity: O(m + n)
// Space Complexity: O(1)
        
           int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
        
    }
//Notes
       
 // Time Complexity : O(MlogM),  Sorting the array(nums1) costs O(MlogM)
 // Space Complexity : O(1), Constant Space. 

    //       for(int i=0; i<n; i++){
    //         nums1[m+i] = nums2[i];
    //     }
    //     sort(nums1.begin(), nums1.end());
    // }
};
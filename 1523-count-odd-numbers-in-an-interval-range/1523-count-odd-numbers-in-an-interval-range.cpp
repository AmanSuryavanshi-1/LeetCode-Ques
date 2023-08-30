class Solution {
public:
    int countOdds(int low, int high) {
        
        // space complexity O(1)   time complexity O(N)
//        int count = 0;
//         while(low <= high){
//             if(low % 2 != 0) count++;
            
//             low++;
//         }
//         return count;
     
        // space complexity O(1)   time complexity O(1)
        return ((high + 1)/2 - low/2);
    }
};
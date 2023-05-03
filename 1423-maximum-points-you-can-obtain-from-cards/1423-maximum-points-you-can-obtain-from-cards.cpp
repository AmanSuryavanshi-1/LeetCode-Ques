class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        for(int i=0; i<k; i++){
           sum+=cardPoints[i];
            }
        int maxsum=sum;
        for(int i =k-1;i>=0;i--){
            //We remove the last visited element 
             sum-=cardPoints[i]; // excluding 
            // and add the non-visited element from the last
            sum+=cardPoints[cardPoints.size()-k+i]; // including
            maxsum= max(sum,maxsum);
        }
        
        return maxsum;
    }
};
class Solution {
public:
     bool isHappy(int n) {   
         set<int> myset;
        int sum;
         int r;
        while(n) //for endless repetion
        {
            sum=0;
            while(n>0){
            r=n%10;
            sum += r*r;
            n=n/10; 
        }
            if(sum==1)
                return true;
            else if(myset.find(sum)!=myset.end())
                return false;
            
            myset.insert(sum);
            n=sum;
        
        }
         return false;
    }
};

// Time complexity: O(log(n)) - In the worst case, the while loop iterates for each digit in 'n', which is log(n).
// Space complexity: O(log(n)) - The space used by the set 'myset' can grow up to log(n) in the worst case, where 'n' is the input number.
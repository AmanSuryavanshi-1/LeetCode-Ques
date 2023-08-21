class Solution {
public:
     bool isHappy(int n) {   
         set<int> myset;
        int sum;
         int r;
        while(1) //for endless repetion
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

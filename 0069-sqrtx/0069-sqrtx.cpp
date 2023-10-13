class Solution {
public:
    int mySqrt(int x) {
// Time complexity: O(sqrt(x)), where 'x' is the input integer
// Space complexity: O(1)
        if(x==0) return 0;
		else if (x==1) return 1;
		for (int i=1;i<=x;i++)
		{
		   if(i*i==x)
				return i;
		   else if(i<=x/i &&  x/(i+1)<(i+1))
				return (i);
		}
	  return -1;  
	}
};
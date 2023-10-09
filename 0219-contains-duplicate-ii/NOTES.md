```
# checks if there are any duplicate elements in the nums array such that the absolute difference between their indices is at most k
nums = {1, 2, 3, 1} and k = 3:
​
* i = 0, curr = 1
mp is empty, so add 1 to the map: mp = {1: 0}
​
* i = 1, curr = 2
2 is not in mp, so add it to the map: mp = {1: 0, 2: 1}
​
* i = 2, curr = 3
3 is not in mp, so add it to the map: mp = {1: 0, 2: 1, 3: 2}
* i = 3, curr = 1
1 is already in mp with index 0. Calculate abs(i - mp[curr]) = abs(3 - 0) = 3, which is less    than or equal to k = 3. So, return true.
​
The code returns true because there is a duplicate element (1) within an index difference of k = 3.
```
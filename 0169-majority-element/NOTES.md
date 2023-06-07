Map approach 1
-> Inside the loop, it increments the count of the current element nums[i] in the map by using map[nums[i]]++.
-> **if(map[nums[i]]>n)** checks if the count of the current element is greater than n. If it is, it means that the current element is the majority element, so it immediately returns nums[i] as the majority element.
->If no majority element is found during the loop, the code returns -1 at the end.
​
Approach 2
-> **count += (ele == nums[i]) ? 1 : -1; **
if ele is equal to num[i] then add 1 to count else subtract 1
​
​
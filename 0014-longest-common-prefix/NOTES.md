**sort(begin(strs), end(strs))**
->This is done to make it easier to find the longest common prefix.
->Sort the input list strs in lexicographical order or alphabetical order.
​
->EG:-
1, 10, 2
Those values are in lexicographical order. 10 comes after 2 in numerical order, but 10 comes before 2 in "alphabetical" order.
​
->This step is necessary because the common prefix should be common to all the strings, so we need to find the common prefix of the first and last string in the sorted list.
​
**for(int i=0; i<a.size(); i++)**
Iterate through the characters of the first and last string in the sorted list, stopping at the length of the shorter string.
​
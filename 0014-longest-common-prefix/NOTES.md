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
**example**
strs = {"flower", "flour", "flourish"};
1) After sorting, the vector becomes: {"flour", "flourish", "flower"}.
2) a = "flour".
3) b = "flower".
4) Iterate through the characters of a and compare them to the corresponding characters in b. The iteration will stop as soon as a character mismatch is found.
at iteratioin 4-> a[3] == 'u' and b[3] == 'w', so a character mismatch is found, and the loop breaks.
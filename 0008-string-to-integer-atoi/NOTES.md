special test cases that may help you to understand the problem
'_' means whitespace
____123  -> 123
___-123  -> -123
____+123  -> 123
_____-+123  -> 0
____+-123  -> 0
___123-  -> 123
​
+-12  -> 0
00123  -> 123
123abc  -> 123
123 1234  -> 123
​
-99999999999999999  -> -2147483648
00999999999999999  -> 2147483647
2147483648  -> 2147483647
-2147483648 -> -2147483648
​
while(i<n && s[i]>='0' && s[i]<='9') {
ans = ans*10 + (s[i]-'0'); // (s[i] - '0') is converting character to integer
i++;
}
string s = "   123abc";
1) i = 5, which points to the first digit '1'.
2) (s[i] - '0') converts '1' to its integer equivalent, which is 1.
3) ans = ans * 10 + (s[i] - '0') calculates ans as 0 * 10 + 1, making ans equal to 1.
4) Increment i to 6, which points to the digit '2'.
5) (s[i] - '0') converts '2' to its integer equivalent, which is 2.
6) ans = ans * 10 + (s[i] - '0') calculates ans as 1 * 10 + 2, making ans equal to 12.
7) Increment i to 7, which points to the digit '3'.
8) (s[i] - '0') converts '3' to its integer equivalent, which is 3.
9) ans = ans * 10 + (s[i] - '0') calculates ans as 12 * 10 + 3, making ans equal to 123.
10) Increment i to 8, which points to the character 'a', and the loop exits.
​
​
int i = 0, n = s.size();
​
while (i < n && s[i] == ' ') {
// Skip space characters at the beginning
i++;
}
​
int positive = 0, negative = 0;
​
if (i < n && s[i] == '+') {
positive++; // Number of positive signs at the start in the string
i++;
}
​
if (i < n && s[i] == '-') {
negative++; // Number of negative signs at the start in the string
i++;
}
​
long long ans = 0; // Use long long to handle potential overflow
​
while (i < n && s[i] >= '0' && s[i] <= '9') {
ans = ans * 10 + (s[i] - '0'); // Convert character to integer
i++;
}
​
if (negative > 0) {
ans = -ans; // If a negative sign exists
}
if (positive > 0 && negative > 0) {
return 0; // If both positive and negative signs exist, e.g., "+-12"
}
​
if (ans > INT_MAX) {
return INT_MAX; // If ans > INT_MAX, return INT_MAX
}
​
if (ans < INT_MIN) {
return INT_MIN; // If ans < INT_MIN, return INT_MIN
}
​
return static_cast<int>(ans);
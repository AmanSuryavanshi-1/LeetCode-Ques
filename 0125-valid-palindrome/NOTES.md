int start= 0;
int end = s.length()-1;
​
while(start<=end){
// Skip non-alphanumeric characters at the beginning of the string. (isalnum)
​
if(!isalnum(s[start])){ start++; continue;}
//The isalnum function returns true if the character is alphanumeric (a letter or a digit) and false if it's not.
//When continue is executed, it immediately jumps to the next iteration of the loop, bypassing the remaining code inside the loop for the current iteration.
if(!isalnum(s[end])) {end--; continue;}
if(tolower(s[start])!=tolower(s[end])) return false;
else
start++;
end--;
}
return true;
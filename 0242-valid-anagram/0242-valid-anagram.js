/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
// Approach 1
// Time Complexity: O(n log n)
// Space Complexity: O(n)

    // s = s.split("").sort().join("");
    // t = t.split("").sort().join("");

        // if(s==t) return true;
        // return false;
        // OR
    // return s==t;

// Approach 2
// Time Complexity: O(n)
// Space Complexity: O(n)

if(s.length !== t.length) return false;

let O1 = {}; //object 1
let O2 = {};

for(let i=0; i<s.length; i++){
    O1[s[i]] = (O1[s[i]] || 0) + 1;
    O2[t[i]] = (O2[t[i]] || 0) + 1;
}
for(let key in O1){
    if(O1[key] !== O2[key]) return false;
}

return true;
};
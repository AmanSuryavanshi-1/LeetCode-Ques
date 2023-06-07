**// LIFO i.e Last In First Out**
*Time complexity: O(n)
Space complexity: O(n)*
​
stack <char> t;  // stack for storing opening parentheses
for(auto i:s)
{
if(i=='(' || i=='{' || i=='[')
{
t.push(i);
}
// check condition for false
else if(t.empty() || (t.top() == '(' && i != ')') || (t.top() == '{' && i != '}') || (t.top() == '[' && i != ']'))
// if stack t is empty or t.top() contains '(' && not contains ')' which means Pair of bracket is not in stack then return false
{
return false;
}
else{
//And if there is a closing bracket ')' in stack then pop or delete the '(' from the stack
t.pop();
}
}
return t.empty(); // if stack is empty then it is valid, otherwise no
// if it is not empty it means some elements are remaining whoes pair are not found
}
};
​
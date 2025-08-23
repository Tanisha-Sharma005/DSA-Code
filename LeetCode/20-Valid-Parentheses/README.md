# LeetCode Problem 20: Valid Parentheses

## Problem Statement
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', 
determine if the input string is valid.

An input string is valid if:
1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.

---

## Examples
### Example 1
Input: s = "()"  
Output: true  

### Example 2
Input: s = "()[]{}"  
Output: true  

### Example 3
Input: s = "(]"  
Output: false  

---

## Approach
- Use a *stack* to keep track of opening brackets.  
- For each character:
  - If it's an opening bracket → push to stack.  
  - If it's a closing bracket → check top of stack:
    - If matching, pop.  
    - Else → invalid.  
- At the end, if stack is empty → valid.  

---

## C++ Solution

```cpp
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty()) return false;
                char top = st.top();
                st.pop();

                if ((c == ')' && top != '(') || 
                    (c == '}' && top != '{') || 
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return st.empty();
    }
};

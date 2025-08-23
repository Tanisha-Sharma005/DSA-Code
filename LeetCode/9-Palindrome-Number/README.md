# LeetCode Problem 9: Palindrome Number

## Problem Statement
Given an integer x, return true if x is a palindrome, and false otherwise.

### Example 1
Input: x = 121  
Output: true  

### Example 2
Input: x = -121  
Output: false  

### Example 3
Input: x = 10  
Output: false  

---

## Approach
- Negative numbers are not palindrome.  
- Reverse the number and compare with the original.  
- If equal → palindrome.  
- Else → not palindrome.  

---

## C++ Solution

```cpp
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long long rev = 0, temp = x;
        while (temp > 0) {
            rev = (rev * 10) + (temp % 10);
            temp /= 10;
        }
        return (rev == x);
    }
};

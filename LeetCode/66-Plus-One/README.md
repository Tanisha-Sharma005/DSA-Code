# LeetCode Problem 66: Plus One

## Problem Statement
You are given a *large integer* represented as an integer array digits, where each digits[i] is the ith digit of the integer.  
The digits are ordered from most significant to least significant in left-to-right order.  
Increment the large integer by one and return the resulting array of digits.

---

## Examples
### Example 1
Input: digits = [1,2,3]  
Output: [1,2,4]  

### Example 2
Input: digits = [4,3,2,1]  
Output: [4,3,2,2]  

### Example 3
Input: digits = [9]  
Output: [1,0]  

---

## Approach
- Start from the last digit.  
- If digit < 9 → just increment and return.  
- Else make it 0 and continue to the next digit.  
- If all digits become 0 → insert 1 at the beginning.  

---

## C++ Solution

```cpp
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

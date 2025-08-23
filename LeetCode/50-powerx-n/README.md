# LeetCode Problem 50: Pow(x, n)

## Problem Statement
Implement pow(x, n), which calculates x raised to the power n (i.e., x^n).

---

## Example 1
*Input:* x = 2.00000, n = 10  
*Output:* 1024.00000  

## Example 2
*Input:* x = 2.10000, n = 3  
*Output:* 9.26100  

## Example 3
*Input:* x = 2.00000, n = -2  
*Output:* 0.25000  
*Explanation:* 2^-2 = 1/(2^2) = 1/4 = 0.25  

---

## Solution Code (C++)
```cpp
class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1.0;
        if(x==0) return 0.0;
        if(x==1) return 1.0;
        if(x==-1 && n%2==0) return 1.0;
        if(x==-1 && n%2!=0) return -1.0;

        long binForm = n;
        if(n < 0){
            x = 1/x;
            binForm = -binForm;
        }

        double ans = 1;
        while(binForm > 0){
            if(binForm % 2 == 1){
                ans *= x;
            }
            x *= x;
            binForm /= 2;
        }
        return ans;
    }
};

# Maximum Product Subarray (C++)

## 📌 Problem Statement
Given an integer array `arr[]`, find the **contiguous subarray** (containing at least one number) which has the largest product and return that product.
---
## 🖥️ Example

**Input**
n = 5
arr = [2, 3, -2, 4, -1]

**Output**
Maximum product of subarray is: 48

**Explanation:**  
The subarray `[2, 3, -2, 4, -1]` gives maximum product = 48.

---

## 🚀 Approach
### Brute Force (O(n²))
1. Consider every subarray `[i..j]`.  
2. Multiply all elements in that subarray.  
3. Track the maximum product found.  

This runs in **O(n²)** time.

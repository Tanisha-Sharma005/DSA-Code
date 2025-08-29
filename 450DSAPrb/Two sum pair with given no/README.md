# Two Sum Problem (C++)

## 📌 Problem Statement
Given an array of integers `arr[]` and a target value `target`,  
determine if there exists a pair `(a, b)` in the array such that:
a + b = target

Return **True** if such a pair exists, otherwise **False**.
---
## 🖥️ Example

**Input:**
arr = {0, 1, 2, -3}
target = -2

**Output:**
True

**Explanation:**  
Here, `-3 + 1 = -2` → so the answer is **True**.

---

## 🚀 Approach
1. Sort the array.  
2. Use two pointers (`start` and `end`):  
   - If `arr[start] + arr[end] == target` → return True.  
   - If sum < target → move `start++`.  
   - If sum > target → move `end--`.  
3. If no pair found → return False.  

This approach works in **O(n log n)** (due to sorting).

---


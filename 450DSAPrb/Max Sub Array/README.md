# Maximum Subarray Sum (Kadane's Algorithm) - C++

## 📌 Problem Statement
Given an integer array `nums`, find the **contiguous subarray** (containing at least one number) that has the **largest sum** and return its sum.

---

## 🖥️ Example

**Input**
n = 9
nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
**Output**
Maximum Subarray Sum = 6

**Explanation:**  
The subarray `[4, -1, 2, 1]` has the largest sum = **6**.

---

## 🚀 Approach (Kadane’s Algorithm)
1. Initialize:
   - `currsum = 0` → sum of current subarray.
   - `maxsum = INT_MIN` → maximum sum found so far.
2. Traverse array:
   - Add current element to `currsum`.
   - Update `maxsum = max(maxsum, currsum)`.
   - If `currsum < 0`, reset `currsum = 0` (negative sums will reduce future subarray sums).
3. Print `maxsum` as the result.

⏱️ Time Complexity: **O(n)**  
💾 Space Complexity: **O(1)**  

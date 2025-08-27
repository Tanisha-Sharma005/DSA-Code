# Reverse an Array After a Given Position

## Problem Statement

Given an array/list `ARR` of integers and a position `M`, your task is to **reverse the subarray starting just after position `M`**, i.e., reverse the elements from index `M + 1` to the end of the array. Indexing is 0-based.

---

## Input Format

- The first line contains an integer `T`, the number of test cases.
- For each test case:
  - The first line contains two integers `N` and `M` — the size of the array and the position after which the reversal must happen.
  - The second line contains `N` space-separated integers representing the array `ARR`.

---

## Output Format

- For each test case, print the modified array after reversing the elements from index `M + 1` to `N - 1`.

---

## Constraints

- 1 ≤ T ≤ 10  
- 0 ≤ M ≤ N ≤ 5 × 10⁴  
- -10⁹ ≤ ARR[i] ≤ 10⁹  
- Time Limit: 1 second

---
## Explanation

### Test Case 1:
- `ARR = [1, 2, 3, 4, 5, 6]`, `M = 3`
- Subarray to reverse: elements after index `3` → `[5, 6]`
- Reversed part: `[6, 5]`
- Final array: `[1, 2, 3, 4, 6, 5]`

### Test Case 2:
- `ARR = [10, 9, 8, 7, 6]`, `M = 2`
- Subarray to reverse: elements after index `2` → `[7, 6]`
- Reversed part: `[6, 7]`
- Final array: `[10, 9, 8, 6, 7]`

---

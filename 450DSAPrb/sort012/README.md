# Sort an Array of 0s, 1s, and 2s (Single Scan)

## Problem Statement

You are given an integer array `ARR` of size `N`, which contains only the elements **0**, **1**, and **2**.  
Your task is to **sort the array in-place** so that all 0s come first, followed by 1s, and then 2s.

---

## Note

You must solve the problem in **Single Scan**, which means:
- You are allowed to traverse the array only once.
- You must not use any extra space (i.e., solve it in-place).

---

## Input Format

- The first line contains an integer `T` — the number of test cases.
- For each test case:
  - The first line contains an integer `N` — the size of the array.
  - The second line contains `N` space-separated integers, each being either 0, 1, or 2.

---

## Output Format

- For each test case, print the sorted array in a single line.

---

## Constraints

- 1 ≤ T ≤ 10  
- 1 ≤ N ≤ 5 × 10⁵  
- 0 ≤ ARR[i] ≤ 2  
- Time Limit: 1 second

---
## Explanation

- The array must be sorted such that all `0`s come first, followed by `1`s, then `2`s.
- The sorting must be done with **a single pass through the array** and without using extra memory.

---

## Efficient Approach

Use the **Dutch National Flag Algorithm**, which utilizes three pointers:
- `low` — points to the next position of `0`
- `mid` — current element under consideration
- `high` — points to the next position of `2` from the end

### Steps:
- Traverse the array once using `mid`
- Swap elements to push `0`s left and `2`s right
- Leave `1`s in place

This results in **O(N)** time and **O(1)** space complexity.

---

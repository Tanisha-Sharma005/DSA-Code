# Rearrange Array: Negatives Before Positives

## Problem Statement

You are given an array `ARR` of size `N`, containing both positive and negative integers. Your task is to **rearrange the array such that all negative numbers appear before all positive numbers**.

📝 **Note:**  
- The relative order of the elements is **not important**.
- The rearrangement must be done **in-place**.

---

## Input Format

- The first line contains an integer `T` — the number of test cases.
- For each test case:
  - The first line contains an integer `N` — the number of elements in the array.
  - The second line contains `N` space-separated integers representing the array `ARR`.

---

## Output Format

- For each test case, print `Yes` after performing the rearrangement.

---

## Constraints

- 1 ≤ T ≤ 10  
- 1 ≤ N ≤ 5 × 10⁴  
- -10⁵ ≤ ARR[i] ≤ 10⁵  
- Time Limit: 1 second

---
## Approach

We use a **two-pointer method**:
- Initialize a pointer `j` to track the position of the next negative number.
- Traverse the array:
  - Whenever a negative number is found at index `i`, swap it with the element at index `j`, then increment `j`.
- This rearranges negatives to the front in **O(N)** time using **O(1)** space.

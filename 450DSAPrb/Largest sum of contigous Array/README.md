# Maximum Subarray Sum (Including Empty Subarray)

## Problem Statement

You are given an integer array `arr` of length `n`.

A **subarray** is a contiguous segment of the array.  
You need to find the **maximum sum** possible among all subarrays, including the possibility of an empty subarray.  
The sum of an empty subarray is defined as 0.

---

## Input Format

- The first line contains an integer `n` — the length of the array.
- The second line contains `n` space-separated integers representing the elements of the array `arr`.

---

## Output Format

- Output a single integer — the maximum subarray sum.

---

## Constraints

- 1 ≤ n ≤ 10^6  
- -10^6 ≤ arr[i] ≤ 10^6  
- Time Limit: 1 second

---
## Approach

Use **Kadane's Algorithm** with a slight modification to consider the empty subarray (sum = 0):

- Initialize `currsum = 0` and `maxsum = 0`.
- Iterate through the array:
  - Add current element to `currsum`.
  - If `currsum` becomes negative, reset it to 0 (meaning empty subarray).
  - Update `maxsum` if `currsum` is greater than `maxsum`.
- Return `maxsum`.

This works in **O(n)** time and **O(1)** space.

# LeetCode Problem 704: Binary Search

## Problem Statement
Given a sorted array of integers and a target value, return the index of the target if it exists. If not, return -1.

You must write an algorithm with O(log n) runtime complexity.

### Example 1
*Input:* nums = [-1,0,3,5,9,12], target = 9  
*Output:* 4  

### Example 2
*Input:* nums = [-1,0,3,5,9,12], target = 2  
*Output:* -1  

---

## Solution Code (C++)
```cpp
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1,mid;
        while(s<=e){
            mid=s+(e-s)/2;
            if(nums[mid]>target){
                e=mid-1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else 
                return mid;
        }
        return -1;
    }
};

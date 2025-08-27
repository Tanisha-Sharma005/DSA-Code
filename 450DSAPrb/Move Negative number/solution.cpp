#include <bits/stdc++.h> 
using namespace std;
vector<int> separateNegativeAndPositive(vector<int> &nums){
    int j = 0,n=nums.size();  
    for (int i = 0; i < n; i++) {
        if (nums[i] < 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }
    return nums;
    
}

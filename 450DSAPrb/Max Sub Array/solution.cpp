#include<iostream>
#include<vector>
#include <climits>
using namespace std;
int main(){
    int n;
    cout << "Enter number of Array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter prices for each day: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int currsum=0,maxsum= INT_MIN;
    for(int val:nums){
        currsum+=val;
        maxsum=max(currsum,maxsum);
        if(currsum<0) currsum=0;
    }
    cout<<maxsum;
    return 0;
   
}

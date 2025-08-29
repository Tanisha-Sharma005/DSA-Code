#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool Twosum(vector<int> &arr,int target){
    sort(arr.begin(),arr.end());
    int start=0,end=arr.size()-1;
    while(start<end){
        int sum=arr[start]+arr[end];
        if(sum==target) return true;
        else if(sum<target) start++;
        else end--;
    }
    return false;
}
int main(){
    vector<int> arr={0,1,2,-3};
    int target=-2;
    if(Twosum(arr,target))
      cout<<"True";
    else
      cout<<"False";
      return 0;
}

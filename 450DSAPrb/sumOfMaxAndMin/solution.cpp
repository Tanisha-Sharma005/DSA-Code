#include <bits/stdc++.h> 
using namespace std;
int sumOfMaxMin(int arr[], int n){
	// Write your code here.
	int maximum=INT_MIN;
	int minimum=INT_MAX;
	for(int i=0;i<n;i++){
		maximum=max(arr[i],maximum);
		minimum=min(arr[i],minimum);
	}
	return maximum+minimum;
}

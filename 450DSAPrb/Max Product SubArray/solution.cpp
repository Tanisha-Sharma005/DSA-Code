#include<iostream>
#include<vector>
using namespace std;
int maxProduct(vector<int> &arr){
    int maxProd=arr[0],n;
    for(int i=0;i<n;i++){
        int mul=1;
        for(int j=1;j<n;j++){
            mul*=arr[j];
            maxProd=max(maxProd,mul);
        }
    }
}
int main(){
    int n;
    cout << "Enter number of Array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"maximum product of array is:"<<maxProduct(arr);
    return 0;

}

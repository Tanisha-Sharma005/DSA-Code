#include<iostream>
#include<vector>
using namespace std;

int FindMin(vector<int> &arr){
    // by linear search
    int res = arr[0], n = arr.size();
    for(int i = 0; i < n; i++){
        res = min(res, arr[i]);
    }
    return res;
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

    cout << FindMin(arr) << endl;
    return 0;
}

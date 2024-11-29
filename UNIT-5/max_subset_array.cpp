// C++ program to find Maximum Product Subarray 
// using nested loops

#include <bits/stdc++.h>
using namespace std;

// Function to return the product of max product subarray
int maxProduct(vector<int> &arr) {
    int n = arr.size();
    int result = arr[0];

    for (int i = 0; i < n; i++) {
        int mul = 1;
        for (int j = i; j < n; j++) {
              mul *= arr[j];
            result = max(result, mul);
        }
    }
    return result;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << maxProduct(arr);
}
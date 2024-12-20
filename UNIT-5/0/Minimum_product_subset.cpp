#include <bits/stdc++.h>
using namespace std;

int minProduct(vector<int> &arr) {
    int n = arr.size();

    int result = arr[0];

    for (int i = 0; i < n; i++) {
        int mul = 1;
        for (int j = i; j < n; j++) {
            mul *= arr[j];
            result = min(result, mul);
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
    cout << "Minimum product of a subarray is: " << minProduct(arr);
    return 0;
}

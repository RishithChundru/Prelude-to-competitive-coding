#include<bits/stdc++.h>
using namespace std;

int min_product_subset(vector<int> &arr,int n){
    sort(arr.begin(),arr.end());
    if(arr[0]>0) return arr[0];
    int product=1;
    for(int i=0;i<n;i++){
        product*=arr[i];
    }
    return product;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<min_product_subset(arr,n);
}
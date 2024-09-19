#include<bits/stdc++.h>
using namespace std;
int findpeak(int arr[],int n,int l,int r){
    int mid=(l+r)/2;
    if(mid==0 || arr[mid-1]<=arr[mid] && arr[mid+1]<=arr[mid]||mid==n-1){
        return mid;
    }
    else if(arr[mid-1]>=arr[mid] && mid>0){
        return findpeak(arr,n,l,mid-1);
    }
    else if(arr[mid+1]>=arr[mid] && mid<n){
        return findpeak(arr,n,mid+1,r);
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    cout<<arr[findpeak(arr,n,0,10)]<<endl;
    
    return 0;
}
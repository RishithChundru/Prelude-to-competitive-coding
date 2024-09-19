#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int r;
    cout<<"Enter r: ";
    cin>>r;
    r=r%n;
    int aux[n];
    int k=0;
    for(int i=n-r;i<n;i++,k++){
        aux[k]=arr[i];
    }
    for(int i=0;i<n-r;i++,k++){
        aux[k]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=aux[i];
        cout<<arr[i]<<" ";
    }
}
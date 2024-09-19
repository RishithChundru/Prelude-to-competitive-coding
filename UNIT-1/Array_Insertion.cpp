#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[], int &n,int key, int pos){
    if(pos<1 || pos>n+1)
    return;
    n++;
    for(int i=n-1;i>pos-1;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=key;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before insertion: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int key;
    cout<<"Enter value to insert: ";
    cin>>key;
    int pos;
    cout<<"Enter position to insert: ";
    cin>>pos;
    cout<<"After insertion: ";
    insertion(arr,n,key,pos);
}
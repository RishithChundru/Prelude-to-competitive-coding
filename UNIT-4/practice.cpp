#include<bits/stdc++.h>
using namespace std;

// iterative binary search
/*int binarysearch(vector<int> &arr, int n,int key){
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]<key) left=mid+1;
        else right=mid-1;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    if(binarysearch(arr,n,key)){
        cout<<key<<" is found";
    }
    else cout<<key<<" is not found";
}
*/

// recursive binary search
/*int binarysearch(vector<int> &arr,int left,int right,int key){
    if(left>right) return -1;
    int mid=left+(right-left)/2;
    if(arr[mid]==key) return mid;
    else if(arr[mid]>key) return binarysearch(arr,left,mid-1,key);
    else return binarysearch(arr,mid+1,right,key);
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    if(binarysearch(arr,0,n-1,key)!=-1){
        cout<<key<<" is found";
    }
    else cout<<key<<" is not found";
}*/


// Search an Element in a Sorted and Rotated Array
/*int search(int arr[],int n,int key){
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==key) return mid;
        else if(arr[left]<=arr[mid]){
            if(key>=arr[left] && key<arr[mid]) right=mid-1;
            else left=mid+1;
        }
        else{
            if(key>arr[mid] && key<=arr[right]){
                left=mid+1;
            }
            else right=mid-1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int result=search(arr,n,key);
    if(result!=-1){
        cout<<"Element found at index "<<result<<endl;
    }
    else{
        cout<<"Element not found";
    }
}*/


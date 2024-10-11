#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int low,int high,int key){
    while(low<high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            high=mid-1;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=10;
    int index;
    index=binarysearch(arr,0,size-1,8);
    if(index!=-1){
        cout<<index;
    }
    else{
        cout<<"The key is not found";
    }
}
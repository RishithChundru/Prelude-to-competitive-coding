#include<iostream>

using namespace std;

int binarysearch(int arr[],int low,int high,int key)
{
while(low<=high)
{
int mid = low+(high-low)/2;

if(arr[mid]==key)
return mid;

else if(arr[mid]>key)
high=mid-1;

else if(arr[mid]<key)
low=mid+1;
}
return -1;
}

int findpivot(int arr[],int low,int high)
{
while(low<=high)
{
if(arr[low]<=arr[high])
return low;

int mid=(low+high)/2;

if(mid-1>=0 && arr[mid]<arr[mid-1])
return mid;

else if(arr[mid]<=arr[low])
high=mid;

else if(arr[mid]>=arr[low])
low=mid+1;
}
return low;
}

int pivotedbinarysearch(int arr[],int low,int high,int key)
{
int pivot = findpivot(arr,low,high);

if(pivot==0)
return binarysearch(arr,low,high,key);

else if(key==arr[pivot])
return pivot;

else if(key>arr[low])
return binarysearch(arr,low,pivot-1,key);

else if(key<arr[low])
return binarysearch(arr,pivot+1,high,key);

return 0;
}

int main()
{
int arr[]={0,12};

int size=2;

int index;

index = pivotedbinarysearch(arr,0,size-1,12);

if(index!=-1)
cout<<index;
else
cout<<"the key is not found";
}
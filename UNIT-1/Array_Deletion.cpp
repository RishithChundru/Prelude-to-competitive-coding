#include<iostream>
using namespace std;
void deletion(int arr[],int &n,int pos)
{
if(pos<1 || pos>n)
return;
for(int i=pos-1;i<n;i++)
{
arr[i]=arr[i+1];
}
n--;
}
int main()
{
int arr[100]={1,2,3,4,5,6,7,8,9,10};
int n=10;

deletion(arr,n,5);

for(int i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
}
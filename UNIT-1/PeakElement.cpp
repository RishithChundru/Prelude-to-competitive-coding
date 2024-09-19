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
    
    int k=0;
    int aux[n];
    for(int i=0;i<n;i++){
        if(i==0){
            if(arr[i]>arr[i+1]){
                aux[k]=arr[i];
                k++;
            }
        }
        else if(i==n-1){
            if(arr[i]>arr[i-1]){
                aux[k]=arr[i];
                k++;
            }
        }
        else{
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
                aux[k]=arr[i];
                k++;
            }
        }
    }
    for(int i=0;i<k;i++){
        cout<<aux[i]<<" ";
    }
    cout<<endl;
    int max=0;
    for(int i=0;i<k;i++){
        if(aux[i]>max){
            max=aux[i];
        }
    }
    cout<<max;
}
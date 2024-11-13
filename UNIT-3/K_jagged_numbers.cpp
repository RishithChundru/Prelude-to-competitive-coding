#include<bits/stdc++.h>
using namespace std;
int primedivisor(int n){
    int count=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(i==n/i){
                count++;
            }
            else{
                count+=2;
            }
        }
    }
    return count;
}
int kjag(int n,int k){
    int a=primedivisor(n);
    return a==k;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int k;
    cout<<"Enter k: ";
    cin>>k;
    primedivisor(n);
    if(kjag(n,k)){
        cout<<"it is a jagged numbers"; 
    }
    else{
        cout<<"it is not a jagged numbers";
    }
}
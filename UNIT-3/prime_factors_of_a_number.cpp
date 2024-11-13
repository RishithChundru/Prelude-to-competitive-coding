#include<bits/stdc++.h>
using namespace std;
void primefactor(int a){
    while(a%2==0){
        cout<<2<<" ";
        a=a/2;
    }
    for(int i=3;i<=sqrt(a);i++){
        while(a%i==0){
            cout<<i<<" ";
            a=a/i;
        }
    }
    if(a>2){
        cout<<a<<" ";
    }
}
int main(){
    int a;
    cout<<"Enter a: ";
    cin>>a;
    primefactor(a);
}
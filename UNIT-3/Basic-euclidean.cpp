#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    int temp;
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    int res=gcd(a,b);
    cout<<res;
}
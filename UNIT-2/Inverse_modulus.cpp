#include<bits/stdc++.h>
using namespace std;
int gcdextended(int a,int b,int *x,int *y){
    if(a==0){
        *x=0;
        *y=1;
        return b;
    }
    int x1,y1;
    int g=gcdextended(b%a,a,&x1,&y1);
    *x=y1-(b/a)*x1;
    *y=x1;
    return g;
}
int modInverse(int a,int b){
    int x,y;
    int g=gcdextended(a,b,&x,&y);
    if(g!=1)
    return -1;
    else {
        if(x<0)
        return x+b;
        else
        return x;
    }
}
int main(){
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<modInverse(a,b);
}
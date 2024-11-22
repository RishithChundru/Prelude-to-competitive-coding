#include<bits/stdc++.h>
using namespace std;
//  Basic Euclidean Algorithm
/*int gcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
}*/


// Gcd Extended
/*int gcdextended(int a,int b,int &x,int &y){
    if(b==0){
        x=1;
        y=0;
        return a;
    }
    int x1,y1;
    int gcd=gcdextended(b,a%b,x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
    return gcd;
}
int main(){
    int a,b,x,y;
    cin>>a>>b;
    int res=gcdextended(a,b,x,y);
    cout<<res;
}*/


// Total Number of Divisors of a Number

int totaldivisors(int n){
    int count=0;
    int divisors=1;
    for(int i=2;i*i<n;i++){
        while(n%i==0){
            n=n/i;
            count++;
        }
        divisors*=(count+1);
    }
    if(n>1) divisors*=2;
    return divisors;
}

int main(){
    int n;
    cin>>n;
    int res=totaldivisors(n);
    cout<<res<<endl;
}
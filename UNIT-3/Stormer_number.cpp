#include<bits/stdc++.h>
using namespace std;
int largestdivisor(int n){
    int large=INT_MIN;
    while(n%2==0){
        large=2;
        n=n/2;
    }
    for(int i=3;i<=sqrt(n);i+=2){
        while(n%i==0){
            large=i;
            n/=i;
        }
    }
    if(n>2){
        large=n;
    }
    return large;
}
int isstormer(int n){
    int num=n*n+1;
    int largest=largestdivisor(num);
    return largest > 2*n;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    if(isstormer(n)){
        cout<<n<<" is a stormer number";
    }
    else{
        cout<<"it is not a stormer number";
    }
}
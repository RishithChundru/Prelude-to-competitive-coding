#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,m;
    cout<<"a,b,m: ";
    cin>>a>>b>>m;
    cout<<(a*b)%m<<endl;
    int res=((a%m)*(b%m))%m;
    cout<<res<<endl;
}
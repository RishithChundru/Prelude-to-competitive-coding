#include<bits/stdc++.h>
using namespace std;
int divisor(int a){
    int count=0;
    cout << "Divisors of " << a << " are: ";
    for(int i=1;i<=sqrt(a);i++){
        if(a%i==0){
            if(i==a/i){
                cout<<i<<" ";
                count++;
            }
            else{
                cout<<i<<" "<<a/i<<" ";
                count+=2;
            }
        }
    }
    cout<<endl;
    return count;
}
int main(){
    int a;
    cout<<"Enter a: ";
    cin>>a;
    int res=divisor(a);
    cout<<res;
}
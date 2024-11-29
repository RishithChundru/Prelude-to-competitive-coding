#include<bits/stdc++.h>
using namespace std;
/*long long fastmodulomul(long long a,long long b, long long m){
    long long res=0;
    a=a%m;
    while(b>0){
        if(b%2==1){
            res=(res+a)%m;
        }
        a=(a*2)%m;
        b=b/2;
    }
    return res;
}
int main(){
    long long a,b,m;
    cin>>a>>b>>m;
    cout<<fastmodulomul(a,b,m);
}*/


// Exponential squaring
/*long long expsqr(long long a,long long b,long long m){
    long long res=0;
    a=a%m;
    while(b>0){
        if(b%2==1){
            res=(res*a)%m;
        }
        a=(a*a)%m;
        b=b/2;
    }
    return res;
}
int main(){
    long long a,b,m;
    cin>>a>>b>>m;
    cout<<expsqr(a,b,m);
}*/



void printNonSquareNumbers(int n) {
    for (int number = 1; number <= n; number++) {
        if (sqrt(number) != int(sqrt(number))) {
            cout << number << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Non-square numbers up to " << n << " are: ";
    printNonSquareNumbers(n);

    return 0;
}

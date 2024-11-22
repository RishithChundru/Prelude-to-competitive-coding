#include<bits/stdc++.h>
using namespace std;

// math modulus
/*int main(){
    int a,b,m;
    cin>>a>>b>>m;
    cout<<(a*b)%m<<endl;
    cout<<((a%m)*(b%m))%m<<endl;    
}*/


// Anagram

/*bool anagram(string a,string b){
    vector<int> arr(26,0);
    if(a.length()!=b.length()) return false;
    for(int i=0;i<a.length();i++){
        arr[a[i]-'a']++;
    }
    for(int i=0;i<b.length();i++){
        arr[b[i]-'a']--;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]!=0) return false;
    }
    return true;
    
}
int main(){
    string a;
    getline(cin,a);
    string b;
    getline(cin,b);
    if(anagram(a,b)){
        cout<<"it is anagram";
    }
    else cout<<"it is not anagram";
}*/

// fast modular multiplication
/*long long fastModuloMultiplication(long long a,long long b,long long mod){
    long long res=0;
    a=a%mod;
    while(b>0){
        if(b%2==1){
            res=(res+a)%mod;
        }
        a=(a*2)%mod;
        b=b/2;
    }
    return res;
}

int main(){
    long long a,b,mod;
    cin>>a>>b>>mod;
    cout<<fastModuloMultiplication(a,b,mod);
}
*/



// Exponential squaring

/*long long modExponentiation(long long a, long long b, long long m) {
    long long result = 1;
    a = a % m;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % m;
        }
        a = (a * a) % m;
        b /= 2;
    }
    return result;
}

int main(){
    long long a,b,m;
    cin>>a>>b>>m;
    cout<<modExponentiation(a,b,m);
}*/

//   N-th Non-Square Number
/*int n_nonSquareNumber(int n){
    int count=0;
    int number=1;
    while(count<n){
        if(sqrt(number)!=int(sqrt(number))){
            count++;
        }
        number++;
    }
    return number-1;
}
int main(){
    int n;
    cin>>n;
    cout<<n_nonSquareNumber(n);
}
*/


// Modular Multiplicative Inverse
long long modExp(long long a,long long b,long long p){
    long long res=1;
    a=a%p;
    if(a==0) return 0;
    while(b>0){
        if()
    }
}
long long invMul(long long a,long long m){
    return modExp(a,m-2,m);
}

int main(){
    long long a,m;
    cin>>a>>m;
    cout<<invMul(a,m);
}
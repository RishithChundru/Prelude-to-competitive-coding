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
/*long long modExp(long long a,long long b,long long p){
    long long res=1;
    a=a%p;
    if(a==0) return 0;
    while(b>0){
        if(b&1){
            res=(res*a)%p;
        }
        b=b>>1;
        a=(a*a)%p;
    }
    return res;
}
long long invMul(long long a,long long m){
    return modExp(a,m-2,m); //a^(m-2)%m
}

int main(){
    long long a,m;
    cin>>a>>m;
    cout<<invMul(a,m);
}
*/ 

// Sum of Middle Row and Element in Matrix
/*int sumMiddle(vector<vector<int>> &arr, int n){
    int rows=arr.size();
    int cols=arr[0].size();
    int middlerow=rows/2;
    int sum=0;
    for(int i=0;i<cols;i++){
        sum+=arr[middlerow][i];
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<sumMiddle(arr,n);
}
*/

// Checking if All Rows of a Matrix are Circular Rotations of Each Other
bool iscircular(const vector<int> &row1,const vector<int> &row2){
    if(row1.size()!=row2.size()) return false;
    string s1="";
    string s2="";
    for(int num:row1) s1+=to_string(num)+",";
    for(int num:row2) s2+=to_string(num)+",";
    s1+=s1;
    return s1.find(s2)!=string::npos;
}

bool arecircular(vector<vector<int>> &arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        if(!iscircular(arr[i-1],arr[i])){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    if(arecircular(arr)){
        cout<<"it is a circular matrix";
    }
    else{
        cout<<"it is non circular matrix";
    }
}
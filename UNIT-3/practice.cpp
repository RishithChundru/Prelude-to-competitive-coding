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
}
*/

// Total Number of Divisors of a Number

// int totaldivisors(int n){
//     int count=0;
//     int divisors=1;
//     for(int i=2;i*i<n;i++){
//         while(n%i==0){
//             n=n/i;
//             count++;
//         }
//         divisors*=(count+1);
//     }
//     if(n>1) divisors*=2;
//     return divisors;
// }
/*int totaldivisors(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int res=totaldivisors(n);
    cout<<res<<endl;
}
*/


//Finding All Prime Factors of a Number
/*void primefactors(int n){
    vector<int> arr;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            arr.push_back(i);
            n=n/i;
        }
    }
    if(n>1) arr.push_back(n);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    primefactors(n);
}
*/


//k-jagged number

/*bool kjagged(int n,int k){
    int kmax=2;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            n=n/i;
            kmax=i;
        }
    }
    if(n>1) kmax=n;
    return kmax<=k;
}
int main(){
    int n;
    int k;
    cin>>n;
    cin>>k;
    if(kjagged(n,k)) cout<<"it is k-jagged number";
    else cout<<"it is not jagged number";
}
*/

// Stormer number
/*int kjagged(int n){
    int kmax=2;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            kmax=i;
            n=n/i;
        }
    }
    if(n>1) kmax=n;
    return kmax;
}
bool isstormer(int n){
    int maxprimefactor=kjagged(n*n+1);
    return maxprimefactor>=2*n;
}
int main(){
    int k;
    cin >> k;
    cout<<(isstormer(k)?"yes":"no")<<endl;
}*/


// finding prime factors by taking square root
/*void primefactor(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            n=n/i;
        }
    }
    if(n>1) cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    primefactor(n);
}
*/

// p-smooth numbers in given ranges
/*bool issmooth(int n,int p){
    int kmax=2;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            n=n/i;
            kmax=i;
        }
    }
    if(n>1) kmax=n;
    return kmax<=p;
}

vector<int> findprime(int start,int end,int p){
    vector<int> factors;
    for(int i=start;i<=end;i++){
        if(issmooth(i,p)){
            factors.push_back(i);
        }
    }
    return factors;
}
int main(){
    int start,end,p;
    cin>>start>>end>>p;
    vector<int> factors=findprime(start,end,p);
    for(int i:factors) cout<<i<<" ";
}
*/


//Problems Based on GCD and Primality Testing

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "GCD: " << gcd(a, b) << endl;

    int n;
    cout << "Enter a number to check primality: ";
    cin >> n;
    cout << (isPrime(n) ? "Prime" : "Not Prime") << endl;
    return 0;
}

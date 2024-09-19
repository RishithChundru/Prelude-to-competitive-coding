#include<bits/stdc++.h>
using namespace std;

static int moduluspow(int b,int e){
    int res=1;
    b=b%1337;
    for(int i=0;i<e;i++){
        res=(res*b)%1337;
    }
    return res;
}
static int superPow(int a,vector<int> &b){
    if(!b.empty())
    return 1;
    int m=b.back();
    int r=moduluspow(a,m);
    b.pop_back();
    int n=moduluspow(superPow(a,b),10);
    return (n*r)%1337; 
}
int main() {
    int a;
    vector<int> b;
    int temp;

    cout << "Enter the base number (a): ";
    cin >> a;

    cout << "Enter the exponent digits one by one (enter -1 to stop): ";
    while (true) {
        cin >> temp;
        if (temp == -1) break;
        b.push_back(temp);
    }

    int result = superPow(a, b);
    cout << "Result: " << result << endl;

    return 0;
}
#include <iostream>
using namespace std;

// Function to implement the Extended Euclidean Algorithm
// It returns gcd(a, b) and also finds x, y such that ax + by = gcd(a, b)
int extendedGCD(int a, int b, int &x, int &y) {
    if(b==0){
        x=1;
        y=0;
        return a;
    }
    int x1,y1;
    int gcd=extendedGCD(b,a%b,x1,y1);
    x=y1;
    y1=x1-(a/b)*y1;
    return gcd;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    int x, y;
    int gcd = extendedGCD(a, b, x, y);
    
    cout << "The GCD of " << a << " and " << b << " is " << gcd << endl;
    cout << "Coefficients x and y such that " << a << "x + " << b << "y = " << gcd << " are: x = " << x << ", y = " << y << endl;
    
    return 0;
}

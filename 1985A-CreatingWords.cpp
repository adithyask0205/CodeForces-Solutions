#include<iostream>
#include<cmath>
using namespace std;


int main() {
    int t; cin >> t;
    while(t--) {
        string a, b;
        cin >> a; cin >> b;

        char A = a[0];
        char B = b[0];
        a[0] = B;
        b[0] = A;
        cout << a << " " << b << endl; 
    }
    return 0;
}
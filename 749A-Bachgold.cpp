#include<iostream>
using namespace std;

int main() {
    long long n; cin >> n;
    long long k = n/2;
    cout << k << endl;
    if(n%2 == 0) {
        for(int i=0; i<k; i++) {
            cout << 2 << " ";
        }
    } else {
        for(int i=1; i<k; i++) {
            cout << 2 << " ";
        }
            cout << 3;
    }
    return 0;
}
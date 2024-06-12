#include<iostream>
using namespace std;

int main() {
    long long t; cin >> t;
    while(t--) {
        long long a, b, c, n; cin >> a >> b >> c >> n;
        long long max = a>b ? a : b; max = max > c ? max : c;
        long long diff = 3*max - a - b - c;
        n >= diff && (n-diff)%3 == 0 ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}
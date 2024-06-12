#include<iostream>
using namespace std;

string parity(int n) {
    int sum=0;
    while(n--) {int a; cin >> a; sum+=a;}
    return sum%2 == 0 ? "YES" : "NO";
}

int main() {
    long long t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << parity(n) << endl;
    }
    return 0;
}
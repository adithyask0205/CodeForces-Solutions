#include<iostream>
using namespace std;

int sticks(int n) {
    return n%2 == 0 ? n/2 : n/2 + 1;
}

int main() {
    long long t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << sticks(n) << endl;
    }
    return 0;
}
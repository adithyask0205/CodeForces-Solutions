#include<iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, x; cin >> n >> x;
        int i=1;
        if(n == 1 || n == 2){
            cout << 1 << endl;
        } else {
            (n-2)%x == 0 ? cout << (n-2)/x + 1 << endl : cout << (n-2)/x + 2 << endl;
        }
    }
    return 0;
}
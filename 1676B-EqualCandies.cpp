#include<iostream>
using namespace std;

int main() {
    long long t; cin >> t;
    while(t--) {
        int n; cin >> n; int min=0;
        int tot = 0;
        for(int i=0; i<n; i++) {
            long long x; cin >> x;
            if(i == 0) {
                min = x;
            } else if(x < min) {
                min = x;
            } 
            tot += x;
        }

        tot = tot - n*min;
        cout << tot << endl;
    }
    return 0;
}
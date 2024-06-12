#include<iostream>
using namespace std;

string turns() {
    int w,h,n; cin >> w >> h >> n; bool res(true);
    int count = 1;
    while(res) {
        res = false;
        if(w%2 == 0) {
            w = w/2; count*=2;
            res = true;
        }
        if(h%2 == 0) {
            h = h/2; count*=2;
            res = true;
        }
    }
    return count >= n ? "YES" : "NO";
}

int main() {
    int t; cin>>t;
    while(t--) {cout << turns() << endl;}
    
    return 0;
}
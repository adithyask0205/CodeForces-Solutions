#include<iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int a,b,c; cin >> a >> b >> c;
        a < b && b > c ? cout << "PEAK" << endl : a < b && c > b ? cout << "STAIR" << endl : cout << "NONE" << endl;
    }
    return 0;
}
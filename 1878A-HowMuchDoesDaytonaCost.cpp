#include<iostream>
#include<cmath>
using namespace std;

void fun() {
    int n, k; cin >> n >> k;
    bool res(false);
    for(int i=0; i<n; i++) {
        int a; cin >> a;
        res = a==k ? true : res;
    }
    res ? cout << "YES" << endl : cout << "NO" << endl;
}

int main() {
    int t; cin >> t;
    while(t--){
        fun();
    }
    return 0;
}
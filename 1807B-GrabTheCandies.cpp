#include<iostream>
#include<cmath>
using namespace std;

void fun() {
    int n; cin >> n; int se=0, so=0;
    for(int i=0; i<n; i++) {
        int a; cin>>a;
        if(a%2==0) {se += a;}
        else {so += a;}
    }
    if(se>so) {cout << "YES" << endl;}
    else {cout << "NO" << endl;}
}

int main() {
    int t; cin >> t;
    while(t--){
        fun();
    }
    return 0;
}
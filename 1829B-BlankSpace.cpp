#include<iostream>
using namespace std;

int turns() {
    int n; cin >> n;
    int last=0, best=0, count=0;
    while(n--) {
        int a; cin >> a;
        a == 0 ? (a == last ? count++ : count = 1) : count = 0;
        last = a;
        best = count > best ? count : best;
    }
    return best;
}

int main() {
    int t; cin>>t;
    while(t--) {cout << turns() << endl;}
    
    return 0;
}
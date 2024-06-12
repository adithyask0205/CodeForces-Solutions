#include<iostream>
using namespace std;

int turns() {
    int n; cin >> n; bool res(true); int count(0);
    string s; getline(cin >> ws, s);
    int i=0;
    while(res && i<(n/2)) {
        (s[i] == '1' && s[n-i-1] == '0') || (s[i] == '0' && s[n-i-1] == '1') ? count++ : res = false;
        i++;
    }
    return n - 2*count;
}

int main() {
    int t; cin>>t;
    while(t--) {cout << turns() << endl;}
    
    return 0;
}
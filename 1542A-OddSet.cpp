#include<iostream>
#include<cmath>
using namespace std;

string turns(int n) {
    int o=0, e=0;
    for(int i=0; i<2*n; i++) {int a; cin >> a; a%2 == 0 ? e++ : o++;}
    return o == e ? "Yes" : "No";
}

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << turns(n) << endl;
    }
    return 0;
}
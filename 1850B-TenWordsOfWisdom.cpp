#include<iostream>
using namespace std;

int turns(int n) {
    int best = 0;
    int b0=0;
    for(int i=1; i<=n; i++) {
        int a,b; cin >> a >> b;
        if(a<=10 && b>b0) {
            best = i;
            b0 = b;
        }
    }

    return best;
}

int main() {
    int t; cin>>t;
    while(t--) {int n; cin >> n; cout << turns(n) << endl;}
    
    return 0;
}
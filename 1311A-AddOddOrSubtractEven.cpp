#include<iostream>
using namespace std;

int turns() {
    int a,b; cin >> a >> b; int moves = 0;
    int diff = b - a;
    if(diff > 0) {
        moves = diff%2 == 0 ? 2 : 1;
    } else if(diff < 0) {
        moves = diff%2 == 0 ? 1 : 2;
    }

    return moves;
}

int main() {
    int t; cin>>t;
    while(t--) {cout << turns() << endl;}
    
    return 0;
}
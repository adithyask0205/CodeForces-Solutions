#include<iostream>
#include<cmath>
using namespace std;

string turns() {
    string a = "";
    for(int i=0; i<8; i++) {
        for(int j=0; j<8; j++) {
            char k; cin >> k;
            if(k!='.') {a+=k;}
        }
    }
    
    return a;
}

int main() {
    int t; cin >> t;
    while(t--) {cout << turns() << endl;}
    return 0;
}
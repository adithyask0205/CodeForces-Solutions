#include<iostream>
using namespace std;

int fun() {
    int n; cin>>n;
    string s; getline(cin >> ws, s);
    int idx=0, len=0;
    for(int i=0; s[i] != '\0'; i++) {
        if (s[i] == 'B') {
            if (len == 0) {idx = i; len++;}
            else {
                len = i - idx + 1;
            }
        }
    }
    
    return len;
}

int main() {
    int t; cin >> t;
    while(t--) {
        cout << fun() << endl;
    }
    return 0;
}
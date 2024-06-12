#include<iostream>
using namespace std;

int turns() {
    int n; cin >> n;
    string a; getline(cin >> ws, a);
    int max = 0;
    for(int i=0; a[i]!='\0'; i++) {
        if((int) a[i] - 96 > max) {
            max = (int) a[i] - 96;
        }
    }

    return max;
}

int main() {
    int t; cin >> t;
    while(t--){cout << turns() << endl;}
    
    return 0;
}
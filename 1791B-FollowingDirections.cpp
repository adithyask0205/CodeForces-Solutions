#include<iostream>
using namespace std;

string turns() {
    int n; cin >> n;
    int x=0, y=0;
    string a; getline(cin >> ws, a);
    for(int i=0; a[i] != '\0'; i++) {
        if(a[i] == 'U') {y++;}
        else if(a[i] == 'D') {y--;}
        else if(a[i] == 'L') {x--;}
        else if(a[i] == 'R') {x++;}
        
        if(x == 1 && y == 1){break;}
    }

    return x == 1 && y == 1 ? "YES" : "NO";
}

int main() {
    int t; cin >> t;
    while(t--){cout << turns() << endl;}
    
    return 0;
}
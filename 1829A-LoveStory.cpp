#include<iostream>
#include<cmath>
using namespace std;

int turns(string a) {
    string base = "codeforces";
    int i=0;
    int count = 0;
    while(a[i] != '\0') {
        if(a[i] != base[i]) {count++;}
        i++;
    }
    return count;
}

int main() {
    int t; cin >> t;
    while(t--){
        string a; cin >> a;
        cout << turns(a) << endl;
    }
    return 0;
}
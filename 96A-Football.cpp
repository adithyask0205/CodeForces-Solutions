#include<iostream>
using namespace std;

string turns(string a) {
    int count=1; bool sit = false;
    for(int i=0; a[i]!='\0'; i++) {
        if(a[i] != a[i-1]) {
            count = 1;
        } else {
            count++;
        }
        if(count == 7) {
            sit = true;
            break;
        }
    }
    
    return sit ? "YES" : "NO";
}

int main() {
    string a; cin >> a;
    cout << turns(a) << endl;
    return 0;
}
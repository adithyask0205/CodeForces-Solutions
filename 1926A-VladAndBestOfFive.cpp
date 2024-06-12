#include<iostream>
#include<cmath>
using namespace std;

char turns(string arr) {
    int a=0, b=0;
    int i=0;
    while(arr[i] != '\0'){
        arr[i] == 'A' ? a++ : b++;
        i++;
    }
    return a>b ? 'A' : 'B';
}

int main() {
    int t; cin >> t;
    while(t--){
        string a; cin >> a;
        cout << turns(a) << endl;
    }
    return 0;
}
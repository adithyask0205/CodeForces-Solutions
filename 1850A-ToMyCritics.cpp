#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    int arr[t];
    for(int i = 0; i<t; i++) {
        int a,b,c;
        cin >> a >> b >> c;
        int x = a+b;
        int y = a+c;
        int z = b+c;
        if(x >= 10 || y >= 10 || z >= 10) {
            arr[i] = 1;
        } else {
            arr[i] = 0;
        }
    }

    for(int i=0; i<t; i++) {
        if(arr[i] == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
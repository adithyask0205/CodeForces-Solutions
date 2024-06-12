#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    int arr[t];
    for(int i=0; i<t; i++) {
        int a,b,c;
        cin >> a >> b >> c;
        if(a == b) {
            arr[i] = c;
        } else if(a == c) {
            arr[i] = b;
        } else if(c == b) {
            arr[i] = a;
        }
    }

    for(int i=0; i<t; i++ ){
        cout << arr[i] << endl;
    }
    return 0;
}
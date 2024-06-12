#include<iostream>
using namespace std;

int main() {
    long long t;
    cin >> t;

    int x = 1;
    long long arr[t];
    for(int i=0; i<t; i++) {
        int a, b;
        cin >> a >> b;

        b > a ? a = 2*a : b = 2*b;
        a > b ? arr[i] = a*a : arr[i] = b*b;
    }

    for(int i=0; i<t; i++) {
       cout << arr[i] << endl;
    }
    return 0;
}
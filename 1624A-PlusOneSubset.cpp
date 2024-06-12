#include<iostream>
using namespace std;

int main() {
    long long t;
    cin >> t;

    int arr[t];
    for(int i=0; i<t; i++) {
        int n;
        cin >> n;

        long long a[n];
        for(int j=0; j<n; j++) {
            cin >> a[j];
        }

        int max = 0, min = a[0];
        for(int j=0; j<n; j++) {
            if(a[j] > max) {
                max = a[j];
            }
            if(a[j] < min) {
                min = a[j];
            }
        }

        arr[i] = max - min;
    }

    for(int j=0; j<t; j++) {
        cout << arr[j] << endl;
    }
    return 0;
}
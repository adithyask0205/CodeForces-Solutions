#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    int arr[t];
    for(int i=0; i<t; i++) {
        int h, m;
        cin >> h >> m;

        arr[i] = (23-h)*60 + (60-m);
    }

    for(int i=0; i<t; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
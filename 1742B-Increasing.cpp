#include<iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int arr[n];
        int x = 0;
        for(int i=0; i<n;i ++) {
            cin >> arr[i];
            for(int j=0; j<i; j++) {
                if(arr[i] == arr[j]) {
                    x = 1;
                }
            }
        }
        x == 1 ? cout << "NO" << endl : cout << "YES" << endl;
    }
    return 0;
}
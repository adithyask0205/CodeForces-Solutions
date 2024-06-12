#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    int ans[t];
    for(int k=0; k<t; k++) {
        int n;
        cin >> n;

        char arr[n];
        cin >> arr;
        int a=0;
        for(int i=0; i<n; i++) {
            char x = arr[i];
            if(a == 1) {
                break;
            } else if(arr[i+1] != x) {
                for(int j=i+1; j<n; j++) {
                    if(arr[j] == x) {
                        ans[k] = 0;
                        a = 1;
                        break;
                    }
                }
            } else {
                continue;
            }
        }

        if(a == 0) {
            ans[k] = 1;
        }
    }

    for(int i=0; i<t; i++) {
        ans[i] == 0 ? cout << "NO" << endl : cout << "YES" << endl;
    }

    return 0;
}
#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    int arr[t];
    for(int i=0; i<t; i++) {
            int n;
        cin >> n;

        int x = n;
        int c = 0;
        int sum = 0;
        while(x) {
            c++;
            x /= 10;
        }

        for(int j=1; j<n%10; j++) {
            sum += 10;
        }
        
        for(int j=1; j<=c; j++) {
            sum += j;
        }

        arr[i] = sum;
    }

    for(int i=0; i<t; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
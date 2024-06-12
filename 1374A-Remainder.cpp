#include<iostream>
using namespace std;

int main() {
    long long t;
    cin >> t;

    long long arr[t];
    for(int i=0; i<t; i++) {
        long long x,y,n;
        cin >> x >> y >> n;
        long long r = n%x;
        if(r < y) {
            arr[i] = n - (r+x-y);
        } else if(r == y) {
            arr[i] = n;
        } else {
            arr[i] = n - (r-y);
        }
    }

    for(int i=0; i<t; i++ ){
        cout << arr[i] << endl;
    }
    return 0;
}
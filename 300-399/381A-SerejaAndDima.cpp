#include<iostream>
using namespace std;

void fun() {
    int n; cin>>n;
    int arr[n]; int s=0, d=0;
    for(int i=0; i<n; i++) {cin >> arr[i];}
    int i=1;
    while(n) {
        int x=0;
        if(arr[0] > arr[n-1]) {
            x = arr[0];
            n--;
            for(int j=0; j<n; j++) {
                arr[j] = arr[j+1];
            }
        } else {
            x = arr[n-1];
            n--;
        }

        if(i%2 != 0) {
            s += x;
            i = 0;
        } else{
            d += x;
            i = 1;
        }
    }
    cout << s << " " << d;
}

int main() {
    fun();
    
    return 0;
}
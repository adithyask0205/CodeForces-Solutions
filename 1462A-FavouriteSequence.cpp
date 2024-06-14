#include<iostream>
#include<cmath>
using namespace std;

void fun() {
    int n; cin >> n;
    int arr[n]; int st = 0, end = n-1;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++) {
        if(i%2 == 0) {cout << arr[st] << " "; st++;}
        else {cout << arr[end] << " "; end--;}
    }
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--){
        fun();
    }
    return 0;
}
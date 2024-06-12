#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    int arr[n];
    int a, b, c;
    for(int i=0; i<n; i++){
        cin >> a >> b >> c;

        if((a>b && b>c) || (c>b && b>a)) {
            arr[i] = b;
        }
        if((a>c && c>b) || (b>c && c>a)) {   
            arr[i] = c;
        }
        if((b>a && a>c) || (c>a && a>b)) {
            arr[i] = a;
        }
    }

    for(int i=0; i<n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
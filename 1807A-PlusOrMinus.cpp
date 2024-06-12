#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    char arr[t];
    for(int i=0; i<t; i++) {
        int a,b,c;
        cin >> a >> b >> c;
        if(a+b == c) {
            arr[i] = '+';
        } else if(a-b == c) {
            arr[i] = '-';
        }
    }

    for(int i=0; i<t; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    long long t;
    cin >> t;
    
    int arr[t];
    long long x=t;
    while(t) {
        long long a, b, c, d, count = 0;
        cin >> a >> b >> c >> d;
        if(b>a){
            count++;
        }
        if(c>a){
            count++;
        }
        if(d>a){
            count++;
        }
        arr[x-t] = count;
        t--;
    }

    for(int i=0; i<x; i++){
        cout << arr[i] << endl;
    }
    return 0;
}
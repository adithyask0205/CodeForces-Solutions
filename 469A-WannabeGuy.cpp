#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    
    int p, q;
    int r=0;
    int arr[n] = {};

    cin >> p;
    for(int i=0; i<p; i++){
        cin >> r;
        arr[r-1] = 1;
    }

    cin >> q;
    for(int i=0; i<q; i++){
        cin >> r;
        arr[r-1] = 1;
    }

    for(int i=0; i<n; i++){
        if(arr[i]==0){
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
    return 0;
}
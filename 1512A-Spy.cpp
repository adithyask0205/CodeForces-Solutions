#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    int arr[t];
    for(int i=0; i<t; i++) {
        int n;
        cin >> n;
        int a[n];
        for(int j=0; j<n; j++){
            cin >> a[j];
        }
        if(a[0]!=a[1] && a[0]==a[2]){
            arr[i] = 2;
        } else if(a[0]!=a[1] && a[0]!=a[2]){
            arr[i] = 1;
        } else{
            for(int k=2; k<n; k++){
                if(a[k] != a[0]){
                    arr[i] = k+1;
                    break;
                }
            }
        }
    }

    for(int i=0; i<t; i++){
        cout << arr[i] << endl;
    }
    return 0;
}
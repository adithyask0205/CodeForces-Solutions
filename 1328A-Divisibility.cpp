#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[n];

    for(int i=0; i<n; i++){
        long long int a, b;
        cin >> a >> b;
        if(a%b!=0){
            arr[i] = b-(a%b);
        }else{
            arr[i] = 0;
        }
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }
    return 0;
}
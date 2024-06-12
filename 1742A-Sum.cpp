#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    int arr[n][3];
    for(int i=0; i<n; i++){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }

    for(int i=0; i<n; i++){
        if(arr[i][0] + arr[i][1] == arr[i][2]){
            cout << "YES" << endl;
        } else if(arr[i][0] + arr[i][2] == arr[i][1]){
            cout << "YES" << endl;
        } else if(arr[i][2] + arr[i][1] == arr[i][0]){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
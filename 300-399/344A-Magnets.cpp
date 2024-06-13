#include<iostream>
using namespace std;

int main(){   
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int x=arr[0];
    int count = 1;
    for(int j=0; j<n; j++){
        if(arr[j]!=x){
            x=arr[j];
            count++;
        }
    }

    cout << count;
    return 0;
}

#include<iostream>
using namespace std;

int main(){   
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int x=0;
    for(int j=0; j<n; j++){
        if(arr[j]==1){
            cout << "HARD";
            x=1;
            break;
        }
    }
    
    if(x!=1){
        cout << "EASY";
    }
    return 0;
}
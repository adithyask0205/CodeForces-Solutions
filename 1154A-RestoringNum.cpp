#include<iostream>
using namespace std;

int main(){
    int arr[4];
    
    int n=4;
    int max = 0;
    while(n){
        cin >> arr[4-n];
        if(arr[4-n]>max){
            max = arr[4-n];
        }
        n--;
    }

    for(int i=0; i<4; i++){
        for(int j=i+1; j<4; j++){
            if(arr[i]!=max && arr[j]!=max){
                cout << arr[i] + arr[j] - max << " ";
            }
        }
    }
    return 0;
}
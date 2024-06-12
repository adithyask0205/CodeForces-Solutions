#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    int x=n;
    while(x){
        cin >> arr[n-x];
        x--;
    }

    int max = arr[0], min = arr[0];
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
            count++;
        }
        if(arr[i]<min){
            min = arr[i];
            count++;
        }
    }

    cout << count;
    return 0;
}
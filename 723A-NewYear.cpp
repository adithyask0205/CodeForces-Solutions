#include<iostream>
using namespace std;

int main(){
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    
    int max = 0, min = arr[0];
    for(int i=0; i<3; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }

    cout << max-min;
    return 0;
}
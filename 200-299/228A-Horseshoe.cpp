#include<iostream>
using namespace std;

int main(){
    int arr[4];
    for(int i=0; i<4; i++){
        cin >> arr[i];
    }    

    int count = 0;
    for(int j=0; j<4; j++){
        for(int k=j+1; k<4; k++){
            if(arr[k]==arr[j]){
                count++;
                break;
            }
        }
    }

    cout << count;
    return 0;
}

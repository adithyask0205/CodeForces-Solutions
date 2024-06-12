#include<iostream>
using namespace std;

int main(){   
    int arr[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> arr[i][j];
        }
    }

    int moves;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(arr[i][j] == 1){
                int a=2-i;
                int b=2-j;
                if(a<0){
                    a *= (-1);
                }
                if(b<0){
                    b *= (-1);
                }
                moves = a+b;
            }
        }
    }
    cout << moves;
    return 0;
}
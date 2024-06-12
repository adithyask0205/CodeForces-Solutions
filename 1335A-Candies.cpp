#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    int arr[t];
    int a=t;
    while(t){
        int x;
        cin >> x;
        if(x%2!=0){
            arr[a-t] = x/2;
        }
        else{
            arr[a-t] = x/2 - 1;
        }
        t--;
    }

    for(int i=0; i<a; i++){
        cout << arr[i] << endl;
    }
    return 0;
}
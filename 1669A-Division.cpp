#include<iostream>
using namespace std;

int main(){
    long long t;
    cin >> t;

    int arr[t];
    for(int i=0; i<t; i++) {
        long long n;
        cin >> n;
        if(n>=1900){
            arr[i] = 1;
        }else if(n>=1600 && n<=1899){
            arr[i] = 2;
        }else if(n>=1400 && n<=1599){
            arr[i] = 3;
        }else{
            arr[i] = 4;
        }
    }

    int x=t;
    while(t){
        cout << "Division " << arr[x-t] << endl;
        t--;
    }
    return 0;
}
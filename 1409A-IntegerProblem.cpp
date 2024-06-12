#include<iostream>
using namespace std;

int main(){
    long long t;
    cin >> t;

    long long arr[t];
    for(int i=0; i<t; i++){
        long long a, b;
        cin >> a >> b;
        if(a>b){
            long long x = (a-b);
            if(x%10 != 0){
                arr[i] = x/10 + 1;
            }else {
                arr[i] = x/10;
            }
        }else if(b>=a){
            long long x = (b-a);
            if(x%10 != 0){
                arr[i] = x/10 + 1;
            }else {
                arr[i] = x/10;
            }
        }
    }

    for(int i=0; i<t; i++){
        cout << arr[i] << endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int k, r;
    cin >> k >> r;

    int i=1, a=k;
    while(a%10!=r){
        if(a%10 == 0){
            break;
        }
        i++;
        a = k*i;
    }

    cout << i;
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int bill=0;
    if(n>=100){
        bill += n/100;
        n-=(n/100)*100;
    }
    if(n>=20){
        bill += n/20;
        n-=(n/20)*20;
    }
    if(n>=10){
        bill += n/10;
        n-=(n/10)*10;
    }
    if(n>=5){
        bill += n/5;
        n-=(n/5)*5;
    }
    bill+=n;

    cout << bill;
    return 0;
}
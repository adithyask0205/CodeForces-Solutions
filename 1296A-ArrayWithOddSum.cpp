#include<iostream>
#include<cmath>
using namespace std;

void fun() {
    int n; cin >> n; int se=0, so=0, ocnt=0;
    for(int i=0; i<n; i++) {
        int a; cin>>a;
        if(a%2==0) {se++;}
        else {so++; ocnt++;}
    }
    if((se!=0 && so!=0) || (se==0 && ocnt%2!=0)) {cout << "YES" << endl;}
    else {cout << "NO" << endl;}
}

int main() {
    int t; cin >> t;
    while(t--){
        fun();
    }
    return 0;
}
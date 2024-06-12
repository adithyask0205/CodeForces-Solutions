#include<iostream>
using namespace std;

int fun() {
    int x,y; cin >> x >> y;
    int n=3; int area = 0;
    while(n){
        int a,b; cin >> a >> b;
        if(b == y) {area = (x-a)*(x-a);}
        n--;
    }
    
    return area;
}

int main() {
    int t; cin >> t;
    while(t--) {
        cout << fun() << endl;
    }
    return 0;
}
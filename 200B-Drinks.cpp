#include<iostream>
using namespace std;

int main(){
    float n;
    cin >> n;
    
    float tot = 0;
    for(int i=0; i<n; i++){
        float a;
        cin >> a;
        tot += a;
    }

    float x = tot/n;
    cout << x;
    return 0;
}
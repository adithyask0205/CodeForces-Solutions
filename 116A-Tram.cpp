#include<iostream>
using namespace std;

int main(){   
    int n;
    int a, b;
    cin >> n;

    int min=0;
    int c=0;
    for(int i=1; i<=n; i++){
        cin >> a >> b;
        c = c - a + b;
        if(c>min){
            min = c;
        }
    }

    cout << min;

    return 0;
}
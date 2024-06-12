#include<iostream>
using namespace std;

int main(){   
    int n, x;
    cin >> n >> x;

    char s[n];
    cin >> s;

    for(int i=0; i<x; i++){
        for(int j=0; j<n; j++){
            if(s[j-1]=='B' && s[j]=='G'){
                s[j-1]='G';
                s[j]='B';
                j++;
            }
        }
    }

    cout << s;
    return 0;
}
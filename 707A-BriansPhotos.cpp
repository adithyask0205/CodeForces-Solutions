#include<iostream>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    char arr[n][m];
    int x = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> arr[i][j];
            if(arr[i][j] != 'W' && arr[i][j] != 'B' && arr[i][j] != 'G' ) {x = 1;}
        }
    }

    x == 0 ? cout << "#Black&White" : cout << "#Color";

    return 0;
}
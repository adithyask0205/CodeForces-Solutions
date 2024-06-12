/* Find the center of the # pattern:
    n rows, m columns
    5 6
    ......
    ......
    .#....
    ###...
    .#....

Output: 4 2*/

#include<iostream>
#include<cmath>
using namespace std;


int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        int count = 0; int x = 0,y = 0;
        for(int i=1; i<=n; i++) {
            int cnt = 0; int yx=0;
            for(int j=1; j<=m; j++) {
                char a; cin >> a;
                if(a == '#') {
                    cnt++;
                    yx = j;
                }
            }
            if(cnt > count) {count = cnt; x=i; y=yx - cnt/2;}
        }

        cout << x << " " << y << endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int tot = 0, i=0;
    while(i<n){
        i++;
        tot += 5*i;
        if(tot > (240 - k)){
            i--;
            break;
        }
    }

    cout << i;
    return 0;
}
#include<iostream>
using namespace std;

int main(){   
    int n;
    cin >> n;
    char str[n];
    cin >> str;

    int count = 0;
    for(int i=0; i<n; i++){
        if(str[i] == str[i-1]){
            count++;
        }
    }
    cout << count;
    return 0;
}
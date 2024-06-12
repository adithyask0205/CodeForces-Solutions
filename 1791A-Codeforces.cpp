#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    char arr[t];
    for(int i=0; i<t; i++){
        cin >> arr[i];
    }
    char str[] = "codeforces";
    for(int i=0; i<t; i++){
        int x = 0;
        for(int j=0; str[j] != '\0'; j++){
            if(arr[i] == str[j]){
                cout << "YES" << endl;
                x = 1;
                break;
            }
        }
        if(x!=1){
            cout << "NO" << endl;
        }
    }
    return 0;
}
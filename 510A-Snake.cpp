#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            int x=m;
            while(x){
                cout << "#";
                x--;
            }
            cout << endl;
        } else if((i/2)%2!=0){
            int x=m-1;
            while(x){
                cout << ".";
                x--;
            }
            cout << "#" << endl;
        } else {
            int x=m-1;
            cout << "#";
            while(x){
                cout << ".";
                x--;
            }
            cout << endl;
        }
    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int w;
    cout << "Enter weight: ";
    cin >> w;

    if((w-2)%2 == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}
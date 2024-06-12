#include<iostream>
using namespace std;

int main(){   
    long long n; //data type for large numbers
    cin >> n;

    int a=0;
    while(n!=0){
        if(n%10==4 || n%10==7){
            a++;
        }
        n=n/10;
    }
    if(a != 4 && a != 7){
        cout << "NO";
    }else{
        cout << "YES";
    }
    return 0;
}
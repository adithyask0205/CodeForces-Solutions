#include<iostream>
using namespace std;

int main(){   
    int k,n,w;
    cin >> k >> n >> w;

    int count = 0;
    for(int i=1; i<=w; i++){
        count+=i;
    }
    count*=k;
    if((count - n)>0){
        cout << count - n;
    }else{
        cout << 0;
    }
    return 0;
}
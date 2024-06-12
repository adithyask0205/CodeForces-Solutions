//After long series of thoughts and calculations, I've used the final formula I came up with for this question. I have to check if there's some other way to solve this or not.

#include<iostream>
using namespace std;

int main(){
    int M, N;
    cin >> M >> N;
    
    int count = (M/2)*N + (M%2)*(N/2);
    cout << count;
    return 0;
}

#include<iostream>
using namespace std;

int main(){   
    char s[1000];
    cin >> s;
    s[0]=toupper(s[0]);
    for(int i=0; s[i]!='\0'; i++){
        cout << s[i];
    }
    return 0;
}

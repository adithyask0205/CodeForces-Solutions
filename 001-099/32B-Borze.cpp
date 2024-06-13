#include<iostream>
using namespace std;

string fun() {
    string s; cin >> s;
    string x;
    for(int i=0; s[i]!='\0'; i++) {
        if(s[i] == '.'){
            x += '0';
        } else if(s[i] == '-') {
            if(s[i+1] == '.') {
                x += '1';
            } else if(s[i+1] == '-') {
                x += '2';
            }
            i++;
        }
    }
    return x;
}

int main() {
    cout << fun() << endl;
    
    return 0;
}
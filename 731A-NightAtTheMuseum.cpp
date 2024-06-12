#include<iostream>
#include<cmath>
using namespace std;

int turns(string a) {
    int init = (int) 'a';
    int i=0;
    int sum = 0;
    while(a[i]!='\0') {
        int fin = (int) a[i];
        int x = abs(init - fin);
        x > 13 ? sum += 26 - x : sum += x;
        init = fin;
        i++;
    }
    return sum;
}

int main() {
    string a; cin >> a;
    cout << turns(a);
    return 0;
}
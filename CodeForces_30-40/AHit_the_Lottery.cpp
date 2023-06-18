#include <iostream>

using namespace std;

int main(){

    int n, b = 0;
    cin >> n;
    if(n >= 100){b += n/100; n -= b*100;}
    if (n >= 20) { b += n/20; n -= (n/20)*20; }
    if(n >= 10){ b += n/10; n -= (n/10)*10; }
    if(n >= 5){ b += n/5; n -= (n/5)*5; }
    if(n > 0){ b += n;}
    cout << b;

    return 0;
}
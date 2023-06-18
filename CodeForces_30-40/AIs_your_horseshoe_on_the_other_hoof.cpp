#include <iostream>
using namespace std;
int main(){

    int a,b,c,d,eq=0;
    cin >> a >> b >> c >> d;
    if(a == b || a == c || a == d){eq++;}
    if(b == c || b == d){eq++;}
    if(c == d){eq++;}
    cout << eq;


    return 0;
}
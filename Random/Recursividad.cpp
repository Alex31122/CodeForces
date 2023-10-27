#include <iostream>
using namespace std;

int Mult(int x, int y){
    if(y != 0){
        return x + Mult(x,y-1);
    }else{
        return 0;
    }
}

// 10 / 2 = 5; == x / y 
float Div(int x, int y){
    if(x - y != 0){
        return Div(x - y, y) + 1;
    }else{
        return 1;
    }
}

int main()
{

    int x,y;
    cin >> x >> y;
    cout << Div(x,y);

    return 0;
}

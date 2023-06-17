#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int a[6][6], rows, col, moves = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1) { rows = i+1; col = j+1; }       
        }
    }
    moves += abs(rows - 3) + abs(col - 3);
    cout << moves;
    return 0;
}
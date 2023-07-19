#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    float a1, a2, a3, b1, b2, b3, n, n2;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> n;
    n2 = ceil((a1 + a2 + a3) / 5);
    n2 += ceil((b1 + b2 + b3) / 10);
    if (n2 <= n)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool Casos_Especiales(int n, int summax, int summin)
{
    if (n == 1)
    {
        cout << 1;
        return true;
    }
    if (summax == summin && n == 2)
    {
        cout << 2;
        return true;
    }
    if (n == 2 && summax > summin)
    {
        cout << 1;
        return true;
    }
    return false;
}
int main()
{

    int n, coins[105], summin = 0, summax = 0, posmin = 1, posmax;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    sort(coins, coins + n);
    posmax = n - 1;
    summax = coins[posmax];
    summin = coins[0];

    if (Casos_Especiales(n, summax, summin))
    {
        return 0;
    }

    while (posmin != posmax)
    {
        if (summin + coins[posmin] < summax && posmin != posmax)
        {
            summin += coins[posmin];
            posmin++;
        }
        else if (summin + coins[posmin] >= summax && posmin != posmax)
        {
            posmax--;
            summax += coins[posmax];
        }
    }
    cout << n - posmax;

    return 0;
}
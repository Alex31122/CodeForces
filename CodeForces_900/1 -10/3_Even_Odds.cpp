#include <iostream>

using namespace std;

int main()
{

    long long int n, k, posact = 1;
    cin >> n >> k;
    if (n % 2 != 0 && (n / 2) + 1 == k)
    {
        cout << n;
        return 0;
    }
    if (n % 2 == 0 && n / 2 == k)
    {
        cout << n - 1;
        return 0;
    }

    if (n == k && n % 2 != 0)
    {
        cout << n - 1;
        return 0;
    }
    if (n == k && n % 2 == 0)
    {
        cout << n;
        return 0;
    }

    if (n % 2 == 0 && (n / 2) > k)
    {
        int i = 4;
        while (n / i > k / 2)
        {
            i += 2;
        }
        posact == i;
        for (int i = 10; i < posact; i += 10)
        {
        }
    }

    if (n % 2 != 0 && (n / 2) + 1 < k)
    {
        posact = (n / 2) + 2;

        for (long long int i = 2; i <= n; i++)
        {
            if (posact == k)
            {
                cout << i;
                return 0;
            }
            posact++;
            i++;
        }
    }
    if (n % 2 == 0 && n / 2 < k)
    {
        posact = (n / 2) + 1;
        for (long long int i = 2; i <= n; i++)
        {
            if (posact == k)
            {
                cout << i;
                return 0;
            }
            posact++;
            i++;
        }
    }

    for (long long int j = 1; j <= n; j++)
    {
        if (posact == k)
        {
            cout << j;
            return 0;
        }
        posact++;
        j++;
    }

    return 0;
}
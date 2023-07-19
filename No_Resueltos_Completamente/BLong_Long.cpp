#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n, t;
    long long int x;
    cin >> t;
    while (t--)
    {
        long long int contador = 0, sum = 0;
        vector<long long int> a;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x != 0)
            {
                a.push_back(x);
            }
        }
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] < 0)
            {
                sum += a[i] * -1;
                while (a[i + 1] < 0 && i < a.size())
                {
                    sum += a[i + 1] * -1;
                    i++;
                }
                contador++;
            }
            else
            {
                sum += a[i];
            }
        }
        cout << sum << " " << contador << endl;
    }

    return 0;
}
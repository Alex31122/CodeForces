#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> a;
    int n, x, res = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        while (a[i + 1] > a[i] + 1 && i < n - 1)
        {
            a[i] += 1;
            res++;
        }
    }
    cout << res;

    return 0;
}
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        map<int, char> val;
        int a[51];
        string s, res = "";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            val[a[i]] = s[i];
        }
        for (int i = 0; i < n; i++)
        {
            res += val[a[i]];
        }
        if (res == s)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, n, aux2;
    string s, aux, message;

    cin >> t;
    for (int k = 0; k < t; k++)
    {
        cin >> n;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            aux = s[i];
            message.append(aux);

            s[i] = '0';
            aux2 = i;
            i = s.find(aux);
            for (int j = aux2; j <= i; j++)
            {
                s[j] = '0';
            }
        }
        cout << message << endl;
        aux.clear();
        message.clear();
    }

    return 0;
}
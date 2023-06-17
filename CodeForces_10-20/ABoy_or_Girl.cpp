#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s, aux;
    int contador, size;
    cin >> s;
    size = s.size();
    contador = size;
    for (int i = 0; i < size; i++)
    {
        aux = s[i];
        s[i] = '0';
        while (s.find(aux) <= 100 && aux != "0")
        {
            s[s.find(aux)] = '0';
            contador--;
        }
        // cout << s << endl;
    }
    // cout << endl;
    if (contador % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}
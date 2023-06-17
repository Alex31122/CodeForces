#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{

    string s, aux;
    int contador, pos, size;
    cin >> s;
    size = s.size();
    contador = size;
    for (int i = 0; i < size; i++)
    {
        aux = s[i];
        s[i] = '0';
        pos = s.find(aux);
        if (pos <= 100)
        {
            s[pos] = '0';
            contador--;
        }
        cout << s << " ";
    }
    cout << contador;
    strup

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void SacarDigitos(int &y, int &m, int &c, int &d, int &u)
{
    int aux;
    aux = y;
    m = aux / 1000;
    aux -= m * 1000;
    c = aux / 100;
    aux -= c * 100;
    d = aux / 10;
    aux -= d * 10;
    u = aux;
}
int main()
{
    int y, m, c, d, u;
    cin >> y;
    y++;
    SacarDigitos(y, m, c, d, u);

    while (m == c || m == d || m == u || c == d || c == u || u == d)
    {
        y++;
        SacarDigitos(y, m, c, d, u);
    }
    cout << y;
    return 0;
}
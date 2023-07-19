#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int n, h, g, hogue = 0;
    vector<int> home, guest;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> h >> g;
        home.push_back(h);
        guest.push_back(g);
    }
    for (int i = 0; i < n; i++)
    {
        hogue += count(guest.begin(), guest.end(), home.at(i));
    }
    cout << hogue;

    return 0;
}
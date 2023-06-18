#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    int size;
    cin >> a;
    cin >> b;
    size = a.size();
    for (int i = 0; i < size; i++)
    {
        if (a[i] != b[i])
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n, faces = 0;
    string poly;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> poly;
        if (poly[0] == 'T')
        {
            faces += 4;
        }
        else if (poly[0] == 'C')
        {
            faces += 6;
        }
        else if (poly[0] == 'O')
        {
            faces += 8;
        }
        else if (poly[0] == 'D')
        {
            faces += 12;
        }
        else if (poly[0] == 'I')
        {
            faces += 20;
        }
    }
    cout << faces;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s;
    bool large = false, small = false, digit = false;
    cin >> s;
    if (s.size() < 5)
    {
        cout << "Too weak";
        return 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] > 64 && s[i] < 91)
        {
            large = true;
        }
        else if (s[i] > 96 && s[i] < 123)
        {
            small = true;
        }
        else if (s[i] > 47 && s[i] < 58)
        {
            digit = true;
        }
    }

    if (large && small && digit)
    {
        cout << "Correct";
    }
    else
    {
        cout << "Too weak";
    }

    return 0;
}
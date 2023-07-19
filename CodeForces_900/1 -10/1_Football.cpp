#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int size;
    cin >> s;
    size = s.size();
    if (size < 7)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < size; i++)
    {
        if (s[i] == s[i + 1] && s[i] == s[i + 2] && s[i] == s[i + 3] && s[i] == s[i + 4] && s[i] == s[i + 5] && s[i] == s[i + 6] && i + 6 < size)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}
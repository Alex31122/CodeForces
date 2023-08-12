#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    string s, s2, s3;
    cin >> s;
    cin >> s2;
    cin >> s3;
    s += s2;
    if (s.size() != s3.size())
    {
        cout << "NO";
        return 0;
    }
    sort(s.begin(), s.end());
    sort(s3.begin(), s3.end());
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s3[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}
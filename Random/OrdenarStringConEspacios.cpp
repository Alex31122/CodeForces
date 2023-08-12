#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    string s, res;
    vector<int> posespacios;
    int i = 0, pos, j = 0;
    getline(cin, s);
    cin.ignore();
    while (pos >= 0)
    {
        pos = s.find(' ');
        posespacios.push_back(pos);
        s[pos] = '0'; // Puede que el error este aqui
        i++;
    }
    sort(s.begin(), s.end());
    cout << s << " ";
    for (int i = 0; i < s.size(); i++)
    {
        res += s[i];
        cout << i << " " << s[i] << " ";
        if (i == posespacios[j])
        {
            res += ' ';
            j++;
        }
    }
    cout << "\n"
         << res;
    return 0;
}
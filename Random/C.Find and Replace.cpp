#include <iostream>

using namespace std;

int main(){

    string intercambios, s;
    int n, pos, i = 0;
    cin >> s >> n;
    intercambios = s[i];
    for (int i = 0; i < n; i++)
    {
        pos = s.find(intercambios);
        s[pos] = '0';
        cout << s << " ";
    }
    intercambios = s[i+1];
    for (int i = 0; i < n; i++)
    {
        pos = s.find(intercambios);
        s[pos] = '0';
        cout << s << " ";
    }

    return 0;
}
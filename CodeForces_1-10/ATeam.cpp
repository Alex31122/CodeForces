#include <iostream>

using namespace std;

int main(){

    int n, a[4], problems = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[0] >> a[1] >> a[2];
        if ((a[0] == 1 && a[1] == 1) || (a[0] == 1 && a[2] == 1))
        {
            problems++;
        }
        else if ((a[1] == 1 && a[0] == 1) || (a[1] == 1 && a[2] == 1))
        {
            problems++;
        }
    }
    cout << problems;

    return 0;
}
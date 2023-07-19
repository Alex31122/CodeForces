#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n, x;
    vector <int> a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (i < n/2)
        {
            a.push_back(x);
        }
        else(
            b.push_back(x);
        )
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = n; i >= 0; i--)
    {
        cout << a[i] << b[i];
        
    }
        
    


    return 0;
}
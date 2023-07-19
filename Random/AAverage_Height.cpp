#include <iostream>
#include <vector>
using namespace std;
void PrintArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ' ';
    }
}
int main()
{

    int n, t, a;
    cin >> t;
    while (t--)
    {
        vector<int> par, impar;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a % 2 == 0)
            {
                par.push_back(a);
            }
            else
            {
                impar.push_back(a);
            }
        }
        PrintArray(impar);
        PrintArray(par);
        cout << endl;
    }
    return 0;
}
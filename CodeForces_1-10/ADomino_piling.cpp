#include <iostream>

using namespace std;

int main()
{

    int M, N, Domi = 0;
    cin >> M >> N;
    while (M > 0)
    {
        if (M >= 2)
        {
            Domi += 1 * N;
            M -= 2;
        }
        if (M == 1)
        {
            Domi += N / 2;
            M--;
        }
    }
    cout << Domi;

    return 0;
}
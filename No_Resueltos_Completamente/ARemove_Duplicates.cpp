#include <iostream>
#include <unordered_set>
using namespace std;

int main(){

    unordered_set <int> res;
    int n, a[51];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = n-1;i >= 0; i--)
    {
        res.insert(a[i]);
    }
    cout << res.size() << endl;
    for (const auto& element : res) {
        std::cout << element << " ";
    }
    
    return 0;
}
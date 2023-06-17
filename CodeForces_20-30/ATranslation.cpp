#include <bits/stdc++.h>
using namespace std;
// int main(){string w,w2;cin>>w;cin>>w2;reverse(w.begin(),w.end());if(w==w2){cout<<"YES";}else{cout<<"NO";}return 0;}
int main()
{
    string w, w2;
    cin >> w;
    cin >> w2;
    reverse(w.begin(), w.end());
    if (w == w2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}

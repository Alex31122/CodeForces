#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,A=0,D=0;string g;
    cin >> n;cin >> g;
    for(int i=0;i<n;i++){if(g[i]=='A'){A++;}else{D++;}}
    if(A>D){cout << "Anton";}else if (D>A){cout<<"Danik";}else{cout<<"Friendship";}
    return 0;
}
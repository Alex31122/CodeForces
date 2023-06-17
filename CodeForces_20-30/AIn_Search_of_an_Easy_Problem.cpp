#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool p=true;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++){cin>>a;if(a==1){p=false;}}
    if(p){cout<<"EASY";}else{cout<<"HARD";}
    return 0;
}
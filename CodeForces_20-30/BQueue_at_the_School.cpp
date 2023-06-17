#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string que;
    int n,t;
    cin>>n>>t; 
    cin>>que;
    for (int j=0;j<t;j++)
    {
        for(int i=0;i<n-1;i++){
            if(que[i] == 'B' && que[i+1] == 'G'){que[i]='G'; que[i+1]='B';i++;}
        }
    }
    cout << que;
    return 0;
}
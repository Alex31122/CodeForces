#include <iostream>
using namespace std;
int main()
{
    int n, x, t;
    cin >> t;
    while (t--)
    {
        cin>>n;
        for(int i=0;i<n;i++){cin>>x;}
        if (n==1){cout<<"216\n";}
        else if(n==2){cout<<"168\n";}
        else if(n==3){cout<<"126\n";}
        else if(n==4){cout<<"90\n";}
        else if(n==5){cout<<"60\n";}
        else if(n==6){cout<<"36\n";}
        else if(n==7){cout<<"18\n";}
        else{cout<<"6\n";}
    }
    return 0;
}
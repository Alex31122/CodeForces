#include <iostream>
#include <set>
using namespace std;

int main(){

    set <int> l;
    int n,p,q,l1;   
    cin >> n;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin>>l1;
        l.insert(l1);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin>>l1;
        l.insert(l1);
    }
    if(l.size() == n){cout<<"I become the guy.";}else{cout<<"Oh, my keyboard!";}
    
    return 0;
}
#include <iostream>
#include <set>

using namespace std;
void Sacar_Multiplos(int n, int d, set <int>& dragons){
    for(int i=n;i<=d;i+=n){
        dragons.insert(i);
    }
}

int main(){

    int k,l,m,n,d,aux;
    set <int> dmg;
    cin>>k; cin>>l; cin>>m; cin>>n; cin>>d;
    Sacar_Multiplos(k,d,dmg);
    Sacar_Multiplos(l,d,dmg);
    Sacar_Multiplos(m,d,dmg);
    Sacar_Multiplos(n,d,dmg);

    aux = d;
    for (int i = 1; i <= d; i++)
    {
        if (dmg.count(i) == 0) {
            aux--;
        }
    }
    cout << aux;

    return 0;
}
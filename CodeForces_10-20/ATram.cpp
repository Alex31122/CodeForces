#include <iostream>
// int main(){int n,l,arv,peo=0,aux=0;std::cin>>n;for(int i=0;i<n;i++){std::cin>>l>>arv;peo-=l;peo+=arv;if(peo>aux){aux=peo;}}std::cout<<aux;return 0;}
int main()
{
    int n, l, arv, peo = 0, aux = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> l >> arv;
        peo -= l;
        peo += arv;
        if (peo > aux)
        {
            aux = peo;
        }
    }
    std::cout << aux;
    return 0;
}

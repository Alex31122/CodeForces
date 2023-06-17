#include <iostream>
// int main(){int n,m,aux=0,g=0;std::cin>>n;while(n--){std::cin>>m;if(aux!=m){g++;}aux=m;}std::cout<<g;}
int main()
{
    int n, m, aux = 0, g = 0;
    std::cin >> n;
    while (n--)
    {
        std::cin >> m;
        if (aux != m)
        {
            g++;
        }
        aux = m;
    }
    std::cout << g;
}

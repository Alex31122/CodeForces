#include <iostream>
// int main(){int n,p,q,r=0;std::cin>>n;while(n--){std::cin>>p>>q;if(q-p>=2){r++;}}std::cout<<r;}
int main()
{
    int n, p, q, r = 0;
    std::cin >> n;
    while (n--)
    {
        std::cin >> p >> q;
        if (q - p >= 2)
        {
            r++;
        }
    }
    std::cout << r;
}

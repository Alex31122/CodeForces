#include <iostream>
// int main(){int k,n,w,c=0;std::cin>>k>>n>>w;w++;while(w--){c+=k*w;}if(c<n){std::cout<<0;}else{std::cout<<c-n;}return 0;}
int main()
{
    int k, n, w, c = 0;
    std::cin >> k >> n >> w;
    w++;
    while (w--)
    {
        c += k * w;
    }
    if (c < n)
    {
        std::cout << 0;
    }
    else
    {
        std::cout << c - n;
    }
    return 0;
}

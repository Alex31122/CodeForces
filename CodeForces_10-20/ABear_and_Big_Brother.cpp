#include <iostream>
// int main(){int a,b,d=0;std::cin>>a>>b;while(a<=b){a*=3;b*=2;d++;}std::cout<<d;return 0;}
int main()
{
    int a, b, d = 0;
    std::cin >> a >> b;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        d++;
    }
    std::cout << d;
    return 0;
}
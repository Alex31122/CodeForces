#include <iostream>
// int main(){long long int n;std::cin>>n;if(n%2==0){std::cout<<n/2;}else{std::cout<<-(n+1)/2;}}
int main()
{
    long long int n;
    std::cin >> n;
    if (n % 2 == 0)
    {
        std::cout << n / 2;
    }
    else
    {
        std::cout << -(n + 1) / 2;
    }
}

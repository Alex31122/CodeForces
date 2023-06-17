#include <iostream>
// int main(){float n,sum=0,x;std::cin>>n;for(int i=0;i<n;i++){std::cin>>x;sum+=x;}std::cout<<sum/n;}
int main()
{
    float n, sum = 0, x;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        sum += x;
    }
    std::cout << sum / n;
}

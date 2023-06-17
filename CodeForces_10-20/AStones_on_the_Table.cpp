#include <bits/stdc++.h>
// int main(){std::string s;int n,m = 0;std::cin>>n;std::cin>>s;for(int i=0;i<n-1;i++){if(s[i]==s[i+1]){ m++;}}std::cout<<m;return 0;}
int main()
{
    std::string s;
    int n, m = 0;
    std::cin >> n;
    std::cin >> s;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            m++;
        }
    }
    std::cout << m;
    return 0;
}

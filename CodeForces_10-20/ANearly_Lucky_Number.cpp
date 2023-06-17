#include <bits/stdc++.h>
// int main(){std::string s;int cont=0,size;std::cin >> s;size=s.size();while(size--){if(s[size]=='4'||s[size]=='7'){cont++;}}if(cont==4||cont==7){std::cout<<"YES";}else{std::cout<<"NO";}return 0;}
int main()
{
    std::string s;
    int cont = 0, size;
    std::cin >> s;
    size = s.size();
    while (size--)
    {
        if (s[size] == '4' || s[size] == '7')
        {
            cont++;
        }
    }
    if (cont == 4 || cont == 7)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
    return 0;
}

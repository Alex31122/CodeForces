#include <iostream>
#include <set>
#include <string>

using namespace std;
//Another solution from COdeForces

//char c;
//set<char>S;
//main()
//{while(cin>>c)
//if(isalpha(c))
//S.insert(c);
//cout<<S.size();
//}

int main(){

    set <char> ANset;
    int size;
    string Anton;
    getline(cin, Anton);
    size = Anton.size();
    for (int i = 1; i < size; i++)
    {
        if(Anton[i] != ' ' && Anton[i] != ',' && Anton[i] != '}')
        {
            ANset.insert(Anton[i]);
        }
    }
    cout << ANset.size();
    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    string s;
    string alph = "abcdefghijklmnopqrstuvwxyz";
    int n;
    cin >> n;
    cin >> s;
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0; i < 26; i++)
    {
        if(s.find(alph[i]) > n){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    

    return 0;
}
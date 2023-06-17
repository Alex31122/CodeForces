#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char string1[101], string2[101];
    cin >> string1; cin >> string2;
    
    if(stricmp(string1, string2) < 0){ cout << -1; }
    else{ cout << stricmp(string1, string2); }

    return 0;
}
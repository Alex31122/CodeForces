#include <iostream>
#include <string>

using namespace std;

int main(){

    string sum;
    int num1 = 0, num2 = 0, num3 = 0, size;
    cin >> sum; 
    size = sum.length();

    for (int i = 0; i < size; i++)
    {
        if      (sum[i] == '1') { num1++; }
        else if (sum[i] == '2') { num2++; }
        else if (sum[i] == '3') { num3++; }
    }

    if (num1 > 0) { cout << "1"; }
    for (int i = num1-1; i > 0; i--) { cout << "+1"; }
    
    if (num2 > 0 && num1 == 0) { 
        cout << "2" ; 
        for (int i = num2-1; i > 0; i--) { cout << "+2"; } 
    } else{
        for (int i = num2; i > 0; i--) { cout << "+2"; } 
    }
    
    if (num3 > 0 && num1 == 0 && num2 == 0) { 
        cout << "3" ; 
        for (int i = num3-1; i > 0; i--) { cout << "+3"; } 
    } else{
        for (int i = num3; i > 0; i--) { cout << "+3"; } 
    }

    return 0;
}
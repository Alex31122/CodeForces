#include <iostream>
#include <vector>
#include <string>
#include "Funciones.h"

using namespace std;

int main(){

    vector <int> num2;
    string num, rnum;

    cin >> num;
    int x = num.size();
    int num3;
    
    for (int i = 0; i < x; i++)
    {
        if(num[i] == ' '){
        }
        else if(num[i] == '-'){
            num3 = stoi(num);
        }

    }
    
    for(int i=0; i<x; i++){
        cout << num2[i] << ", ";
    }    

    return 0;
}
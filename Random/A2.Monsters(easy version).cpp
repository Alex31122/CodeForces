#include <iostream>
#include <bits/stdc++.h>


using namespace std;
int main(){

    int TC, c, i;
    //int arr[1000], arr2[1000];

    //int arr[] = {9,3,4,6,8,3,5,8,1,3};
    int arr[] = {4,1,5,4,1,1};
    
    int diferencia, contador = 0;

    // cin >> TC;

    for (int i = 0; i < 5; i++)
    {
        //cin >> arr[i];
        sort(arr, arr + 7);
    }

    while(arr[0] != 1){
        arr[0]--;
        contador++;
    }
    cout << "========";
    cout << arr[0];
    cout << "\n========";
    // Print Array Ordenado
    for(int i=0; i<6; i++){
        cout << endl << arr[i];
    }

    cout << "==========l";
    for (int i = 0; i <6; i++)
    {
        diferencia = arr[i+1] - arr[i];
        if(diferencia != 1 and diferencia != 0){
            arr[i+1] -=1;
            contador += 1;
            cout << arr[i+1] <<endl;
            diferencia -= 1;
        }
    }

    // Print Array Ordenado
    cout << "Aray: " << endl;
    for(int i=0; i<6; i++){
        cout << endl << arr[i];
    }

   /*  // Print Array
    cout << "=====" << endl;
    for(int i=0; i<10; i++){
        cout << endl;
        cout << arr[i];
    } */
        
    cout << "Numero de veces de uso del ataque 1: " << contador; 
    return 0;
}
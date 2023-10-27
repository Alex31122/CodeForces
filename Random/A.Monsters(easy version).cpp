#include <iostream>
#include <bits/stdc++.h>


using namespace std;
int main(){

    int TC, c, i,n;
    int [n];
    //int arr[1000], arr2[1000];

    //int arr[] = {9,3,4,6,8,3,5,8,1,3};
    int arr[] = {9,3,4,6,8,3,5,8,2,3};
    
    int diferencia;

    // cin >> TC;

    for (int i = 0; i < 10; i++)
    {
        //cin >> arr[i];
        sort(arr, arr + 10);
    }

    while(arr[i] != 1){
        arr[i]--;
    }
    
    // Print Array Ordenado
    for(int i=0; i<10; i++){
        cout << endl;
        cout << arr[i];
    }

    for (int i = 0; i <10; i++)
    {
        diferencia = arr[i+1] - arr[i];
        if(diferencia != 1 and diferencia != 0){
            arr[i+1] -=1;
            cout << arr[i+1] <<endl;
        }
    }



    // Print Array
    cout << "=====" << endl;
    for(int i=0; i<10; i++){
        cout << endl;
        cout << arr[i];
    }
        

    return 0;
}
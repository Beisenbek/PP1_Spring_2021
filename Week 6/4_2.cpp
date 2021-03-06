#include <iostream>

using namespace std;

void doubleAndPrintArray(int * b, int n){

    for(int i = 0; i < n; ++i){
        b[i] = b[i] * 2;
    }

    for(int i = 0; i < n; ++i){
        cout << b[i] << " ";
    }   
}


int main(){


    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    doubleAndPrintArray(a, n);
    cout << endl;
    

    for(int i = 0; i < n; ++i){
        cout << a[i]  << " ";
    }


    return 0;
}
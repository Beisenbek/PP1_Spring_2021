#include <iostream>

using namespace std;

void printDifferenceOfArrays(int * a, int * b, int n){
    for(int i = 0; i < n; ++i){
        cout << abs(a[i] - b[i]) << " ";
    }
}

void readArray(int someArray[], int n){
    for(int i = 0; i < n; ++i){
        cin >> someArray[i];
    }
}

int main(){

    int n;
    cin >> n;
    int a[n], b[n];

    readArray(a, n);
    readArray(b, n);

    printDifferenceOfArrays(a, b, n);
   

    return 0;
}
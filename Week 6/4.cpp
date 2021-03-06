#include <iostream>

using namespace std;

void printArray(int * a, int n){
    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }   
}

void printArray2(int * a, int n){
    for(int i = 0; i < n; ++i){
        cout << *(a + i) << " ";
    }   
}


int main(){


    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    printArray(a, n);
    cout << endl;
    printArray2(a, n);


    return 0;
}
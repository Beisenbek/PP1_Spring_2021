#include <iostream>

using namespace std; 

int main(){ 
    int a; 
    cin >> a; 
    int r1 = a % 2; 
    a /= 2; 
    int r2 = a % 2; 
    a /= 2; 
    int r3 = a % 2; 
    a /= 2; 
    int r4 = a % 2; 
    //cout << r4 << r3 << r2 << r1 << endl;
    //cout << r1 << r2 << r3 << r4 << endl;
    cout << 8 * r1 + 4 * r2  + 2 * r3  + r4 << endl;
    return 0; 
}
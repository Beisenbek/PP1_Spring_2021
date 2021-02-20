#include <iostream>

using namespace std;


int main(){

    int x;
    cin >> x;

    int r1 = x % 2;
    x = x / 2;

    int r2 = x % 2;
    x = x / 2;

    int r3 = x % 2;
    x = x / 2;

    int r4 = x % 2;
    x = x / 2;

    int r5 = x % 2;
    x = x / 2;

    int r6 = x % 2;
    x = x / 2;

    cout << r6 << r5 << r4 << r3 << r2 << r1 << endl;


    return 0;
}
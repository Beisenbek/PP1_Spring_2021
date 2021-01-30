#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;

    int a1 = x % 2;
    x = x / 2;

    int a2 = x % 2;
    x = x / 2;

    int a3 = x % 2;
    x = x / 2;

    int a4 = x % 2;
    x = x / 2;

    //cout << a1 << " " << a2 << " " << a3 << " " << a4 << endl;
    //cout << a4 << " " << a3 << " " << a2 << " " << a1 << endl;
    
    cout << a4 << a3 << a2 << a1 << endl;

    cout << 8 * a4 + 4 * a3 + 2 * a2 + 1 * a1 << endl;


    return 0;
}
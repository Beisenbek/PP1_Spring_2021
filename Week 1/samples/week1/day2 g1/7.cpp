#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int x;
    cin >> x;

    /*
    x = 100 * k1 + 10 * k2 + 1 * k3;
    345 = 300 + 40 + 5 = 3 * 100 + 4 * 10 + 1 * 5;
    345/100 = 3

    345 % 10 = 5
    */

    cout << x / 100 << " " << x % 10 << endl;


    return 0;
}
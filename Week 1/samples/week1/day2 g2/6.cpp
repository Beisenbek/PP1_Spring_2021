#include <iostream>
#include <iomanip>      // std::setprecision

using namespace std;

int main(){

    int x, y;
    cin >> x >> y;

    cout << 1.0 * x / y << endl;

    cout << setprecision(10) <<  1.0 * x / y << endl;


    return 0;
}
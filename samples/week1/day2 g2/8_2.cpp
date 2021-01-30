#include <iostream>
#include <iomanip>      // std::setprecision

using namespace std;

int main(){

    int x;
    cin >> x;
    cout << "The next number for the number " << x << " is " << x + 1 <<".\n";
    cout << "The previous number for the number "<< x <<" is "<< x - 1 <<".";

    return 0;
}
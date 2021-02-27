#include <iostream>
#include <cmath>
#include <iomanip>      // std::setprecision

using namespace std;

int main(){

    
    cout << 5.0/3 << endl;
    printf("%.10f\n", 5.0/3);

    cout << setprecision(11) << 5.0/3;

    return 0;
}
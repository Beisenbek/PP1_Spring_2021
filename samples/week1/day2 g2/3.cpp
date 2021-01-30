#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;


    cout << x / 100 << " " << x % 10 << endl;

    /*
    
    345 = 3 * 100 + 4 * 10 + 1 * 5

    345 = 34 * 10 + 5

    x % 10 ==> last digit

    x ==> first digit?
    

    678509 => 67850 => 6785 => 678 => 67 => 6 


    345 / 100 => 3

    */

    return 0;
}
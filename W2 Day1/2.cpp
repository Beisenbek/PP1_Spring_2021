#include <iostream>
#include <bitset>

using namespace std;


int main(){

 
    int x;
    cin >> x;

    bitset<6> mybits(x);

    cout << mybits << endl;


    return 0;
}
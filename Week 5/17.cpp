#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

    stringstream ss;

    ss << 1 << 2  << " " << 3 << 4;

    int s;

    ss >> s;

    cout << s << endl;

    cout << sqrt(s) << endl;
    //cout << ss.str() << endl;

    return 0;
}
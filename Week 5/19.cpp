#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

    string s;
    cin >> s;

    reverse(s.begin(), s.end());

    cout << s << endl;

    return 0;
}
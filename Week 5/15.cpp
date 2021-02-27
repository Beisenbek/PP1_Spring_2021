#include <iostream>

using namespace std;

int main(){

    string s,t;
    cin >> s >> t;

    s.insert(1, t);

    cout << s << endl;

    return 0;
}
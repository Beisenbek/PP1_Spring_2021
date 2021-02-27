#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

   string s;
   string t;
   cin >> s >> t;

   s.append(t);
   cout << s << endl;

    return 0;
}
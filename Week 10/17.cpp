
#include <map>
#include <iostream>

using namespace std;

int f(map<string, int> m){
    int result = 0;
    map<string, int> :: iterator it;
    for(it = m.begin(); it != m.end(); ++it){
        result += (*it).second;
    }
    return result;
}


int main(){

   map<string, int> m;

   string str;
   int n, x;
   cin >> n;

   for(int i = 0; i < n; ++i){
       cin >> str >> x;
       m[str] = x;
   }

   cout << f(m) << endl;
   
   return 0;
}
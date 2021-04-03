
#include <map>
#include <iostream>

using namespace std;


int main(){

   pair<string, string> p;

   p.first = "Bob";
   p.second = "FIT";

   map<string, string> m;

   pair<string, string> p2 = make_pair("Alice", "FEF");

   m.insert(p);
   m.insert(p2);

   map<string, string> :: iterator it;

   for(it = m.begin(); it != m.end(); ++it){
        pair<string, string> p = *it;
        cout << p.first << " " << p.second << endl;
    }
   
   return 0;
}
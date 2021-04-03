
#include <map>
#include <iostream>

using namespace std;


void f(pair<string ,string> p){
    cout << p.first << " " << p.second << endl;
}

int main(){

   pair<string, string> p;

   p.first = "Bob";
   p.second = "FIT";

   f(p);
   
   return 0;
}
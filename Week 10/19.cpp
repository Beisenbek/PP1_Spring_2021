
#include <map>
#include <iostream>

using namespace std;

void f(map<string, int> & m2){
    m2.clear();
    map<string, int> :: iterator it;
    cout << "copy:" << endl;
    for(it = m2.begin(); it != m2.end(); ++it){
        pair<string, int> p = *it;
        cout << p.first << " " << p.second << endl;
    }
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

    f(&m);

    cout << "origin:" << endl;

    map<string, int> :: iterator it;

    for(it = m.begin(); it != m.end(); ++it){
        pair<string, int> p = *it;
        cout << p.first << " " << p.second << endl;
    }
   
   return 0;
}
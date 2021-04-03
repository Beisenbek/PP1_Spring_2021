
#include <map>
#include <iostream>

using namespace std;


int main(){

    map<string, int> m;

    m["apple"] = 12;
    m["apple"] = 13;

    m.insert(make_pair("apple",14));
    

    map<string, int> :: iterator it;

    for(it = m.begin(); it != m.end(); ++it){
        pair<string, int> p = *it;
        cout << p.first << " " << p.second << endl;
    }


    return 0;
}
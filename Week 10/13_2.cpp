
#include <map>
#include <iostream>

using namespace std;


int main(){

    map<string, int> m;

    int n;
    cin >> n;

    string w;

    for(int i = 0; i < n; ++i){
        cin >> w;
        m[w] = w.size();
    }

    map<string, int> :: iterator it;

    for(it = m.begin(); it != m.end(); ++it){
        pair<string, int> p = *it;
        cout << p.first << " " << p.second << endl;
    }


    return 0;
}
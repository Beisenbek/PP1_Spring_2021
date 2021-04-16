#include <iostream>
#include <map>

using namespace std;

int main(){

    multimap<string, int> mm;

    int n;
    cin >> n;

    string str;

    for(int i = 0; i < n; ++i){
        cin >> str;
        mm.insert(make_pair(str, str.size()));
    }

    multimap<string, int>::iterator it;

    for(it = mm.begin(); it != mm.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}
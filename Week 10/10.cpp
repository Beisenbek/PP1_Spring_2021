
#include <set>
#include <iostream>

using namespace std;


int main(){

    set<int> s;

    int n, x; 
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> x;
        s.insert(x);
    } 

    cout << *s.begin() << endl;

    return 0;
}
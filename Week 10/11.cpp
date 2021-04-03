
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

    set<int> :: reverse_iterator it;

    for(it = s.rbegin(); it != s.rend(); ++it){
        cout << *it << " ";
    }

    return 0;
}
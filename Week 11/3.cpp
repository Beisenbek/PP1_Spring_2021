#include <iostream>
#include <set>

using namespace std;

int main(){

    multiset<int> ms;

    int x, n;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> x;
        ms.insert(x);
    }

    multiset<int>::iterator it;

    for(it = ms.begin(); it != ms.end(); ++it){
        cout << *it << " ";
    }

    return 0;
}
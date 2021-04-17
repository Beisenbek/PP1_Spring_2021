#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool f(string a, string b){
    if(a.size() < b.size()) return true;
    if(a.size () == b.size()) return true;
    return false;
}

int main(){

    string a[] = {"apple", "kiwi2", "orange"};

    int n = 3;

    stable_sort(a, a + n, f);

    cout << "====" << endl;
    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }

    return 0;
}
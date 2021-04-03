#include <iostream>
#include <vector>

using namespace std;


int main(){

    vector<int> v;

    int n;
    cin >> n;

    int x;
    
    for(int i = 0; i < n; ++i){
        cin >> x;
        v.push_back(x);
    }

    v.pop_back();

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }


    return 0;
}
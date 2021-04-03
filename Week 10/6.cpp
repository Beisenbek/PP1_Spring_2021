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

    sort(v.begin(), v.end());

    for(int i = 0; i < n; ++i){
        cout << v[i] << " ";
    }


    cout << endl;

    sort(v.rbegin(), v.rend());

    for(int i = 0; i < n; ++i){
        cout << v[i] << " ";
    }



    return 0;
}
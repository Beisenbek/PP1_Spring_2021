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

    vector<int> :: reverse_iterator it;

    for(it = v.rbegin(); it != v.rend(); ++it){
        cout << *it << " ";
    }


    return 0;
}
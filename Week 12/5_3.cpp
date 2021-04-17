#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

struct my_pair{
    int sum;
    int pos;
    my_pair(int s, int i){
        sum = s;
        pos = i;
    }
}; 

bool f(my_pair o1, my_pair o2){
    return o1.sum < o2.sum;
}

int main(){

    int n, x, y;
    cin >> n;

    vector<my_pair> v;

    for(int i = 0; i < n; ++i){
        cin >> x >> y;
        my_pair t(x + y, i + 1);
        v.push_back(t);
    }

    sort(v.begin(), v.end(), f);

    for(int i = 0; i < n; ++i){
        cout << v[i].pos << " ";
    }
   

    return 0;
}
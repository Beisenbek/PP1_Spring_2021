#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

bool f(pair<int, int> o1, pair<int, int> o2){
    int s1 = o1.first + o1.second;
    int s2 = o2.first + o2.second;
    return s1 < s2;
}

int main(){

    int n, x, y;
    cin >> n;

    map<pair<int, int> , int> m;
    vector<pair<int, int> > v;

    for(int i = 0; i < n; ++i){
        cin >> x >> y;
        pair<int, int> p = make_pair(x, y);
        m.insert(make_pair(p, i + 1));
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end(), f);

    for(int i = 0; i < n; ++i){
        cout << m[v[i]] << " ";
    }

    return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool f(pair<int, int> o1, pair<int, int> o2){
    int s1 = o1.first + o1.second;
    int s2 = o2.first + o2.second;
    if(s1 == s2) return false;
    if(s1 > s2) return false;
    if(s1 < s2) return true;
}

int main(){

    int n, x, y;
    cin >> n;


    map<pair<int, int> , int> m;

    for(int i = 0; i < n; ++i){
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end(), f);

    for(int i = 0; i < n; ++i){
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}
#include <iostream>
#include <algorithm>


using namespace std;

int main(){

    int n;
    cin >> n;

    int cnt = (n * n + n) / 2;

    int a[cnt];

    int offset = 0;

    for(int step = 1; step <=n; ++step){
        fill(a + offset, a + offset + step, step);
        offset += step;
    }

    for(int i = 0; i < cnt; ++i){
        cout << a[i] << " ";
    }


    return 0;
}
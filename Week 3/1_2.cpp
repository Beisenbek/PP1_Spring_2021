#include <iostream>

using namespace std;

int main(){

    int n, l, r;
    cin >> n >> l >> r;

    int sum = 0, x;

    for(int i = 1; i <= n; ++i){
        cin >> x;
        if(i <= r && i >= l){
            sum += x;
        }
    }

    cout << sum << endl;

    return 0;
}
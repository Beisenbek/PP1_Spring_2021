#include <iostream>
#include <algorithm>


using namespace std;

void f(int x){
    for(int i = 1; i <= x; ++i){
        cout << x << " ";
    }
}

int main(){

    int n;
    cin >> n;

    for(int i = 1; i <=n; ++i){
        f(i);
    }


    return 0;
}
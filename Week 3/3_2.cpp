#include <iostream>


int a[10000000000000];

using namespace std;

int main(){

    int x, sum = 0;

    //int a[ 999999];
    //int a[1000000];

    int n = 0;

    while(cin >> x){
        a[n] = x;
        n++;
    }

    for(int i = 0; i < n; ++i){
        sum += a[i];
    }
    
    cout << sum << endl;
    

    return 0;
}
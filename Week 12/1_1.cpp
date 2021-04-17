#include <iostream>
#include <algorithm>


using namespace std;

bool isPrime(int x){
    if(x == 0) return false;
    if(x == 1) return false;
    int d = 0;
    for(int i = 1; i <= x; ++i){
        if(x % i == 0){
            d++;
        }
    }
    if(d == 2) return true;
    return false;
}

bool isPrime2(int x){
    return isPrime(abs(x));
}

int main(){

    int n;
    cin >> n;
    int cnt = 0;

    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    cout << count_if(a, a + n, isPrime2) << endl;
   

    return 0;
}
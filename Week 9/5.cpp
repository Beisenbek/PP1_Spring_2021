#include <iostream>

using namespace std;


int sum2(int n){
    int result = 0;
    for(int i = 1; i <= n; ++i){
        result += i;
    }
    return result;
}

int sum(int n){
    if(n <= 0) return 0;
    if(n == 1) return 1;
    return n + sum(n - 1);
}
 
int main(){

    int n;
    cin >> n;
    //sum(1..n)

    cout << sum(n) << endl;
    cout << sum2(n) << endl;

    return 0;
}

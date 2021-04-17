#include <iostream>
#include <algorithm>


using namespace std;

string int2bin(int x){
    string res  = "";
    do{
        int t = x % 2;
        res = char(t + 48) + res;
        x = x / 2;
    }while(x > 0);
    return res;
}

void print_binary(int x){
    cout << int2bin(x) << endl;
}

int main(){

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    for_each(a, a + n, print_binary);

    return 0;
}
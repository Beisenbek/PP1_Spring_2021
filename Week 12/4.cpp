#include <iostream>
#include <algorithm>


using namespace std;

string f(int x){
    string res  = "";
    do{
        int t = x % 2;
        res = char(t + 48) + res;
        x = x / 2;
    }while(x > 0);
    return res;
}

int main(){

    int n;
    cin >> n;

    int x;
    for(int i = 0; i < n; ++i){
        cin >> x;
        cout << f(x) << endl;
    }

    return 0;
}
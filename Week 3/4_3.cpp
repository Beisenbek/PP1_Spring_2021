#include <iostream>
#include <cmath>


using namespace std;

long long a[31623];

int main(){

    for(int i = 1; i <= 31623; ++i){
        a[i] = i * i;
        //cout << a[i]  << " ";
    }

    long long x;
    cin >> x;

    bool found = false;

    for(int i = 1; i <=31623; ++i){
        if(a[i] == x){
            found = true;
            break;
        }
    }

    if(found){
        cout << "Yes";
    }else{
        cout << "No";
    }


    return 0;
}
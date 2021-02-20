#include <iostream>
#include <cmath>


using namespace std;


bool a[1000014130];

int main(){

    for(int i = 1; i <=1000014130; ++i){
        a[i] = false;
    }

    for(int i = 1; i <=31623; ++i){
        a[i * i] = true;
    }

    int x;
    cin >> x;

    if(a[x] == true){
        cout << "Yes";
    }else{
        cout << "No";
    }


    return 0;
}
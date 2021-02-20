#include <iostream>
#include <cmath>


using namespace std;


bool a[1000000];

int main(){

    for(int i = 1; i <=1000000; ++i){
        a[i] = true;
    }

    for(int i = 2; i <=1000000; ++i){
        for(int j = i + i; j <= 1000000; j = j + i){
            a[j] = false;
        }
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
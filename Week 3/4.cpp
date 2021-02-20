#include <iostream>
#include <cmath>


using namespace std;

int main(){

    int n;
    cin >> n;

    int m = sqrt(n);

    if(m * m == n){
        cout << "Yes";
    }else{
        cout << "No";
    }
    

    return 0;
}
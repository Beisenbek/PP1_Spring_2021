#include <iostream>

using namespace std;


int main(){

    int n;

    cin >> n;

    if(n % 2 == 1){
        cout << "Odd" << endl;
    }else if(n == 0){
        cout << "None" << endl;
    }else{
        cout << "Even" << endl;
    }

    return 0;
}
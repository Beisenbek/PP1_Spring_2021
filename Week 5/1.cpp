#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int current;
    int previous = 0;

    for(int i = 0; i < n; ++i){
        cin >> current;
        if(previous == current) continue;
        cout << current << " ";
        previous = current;
    }


    return 0;
}
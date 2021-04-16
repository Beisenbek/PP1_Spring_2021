#include <iostream>
#include <ctime>
#include <vector>

using namespace std;


int f(int mx){
    return rand() % mx;
}

int g(){
    return f(100);
}

int main(){

    srand(time(0));

    vector<int> v(10);

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

    cout << endl;

    generate(v.begin(), v.end(), g);

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

    return 0;
}
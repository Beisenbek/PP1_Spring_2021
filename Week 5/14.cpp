#include <iostream>

using namespace std;

int main(){

    string s,t;
    cin >> s >> t;

    if(s.find(t) == string::npos){
        cout << "not found!";
    }else{
        cout << "found!";
    }

    return 0;
}
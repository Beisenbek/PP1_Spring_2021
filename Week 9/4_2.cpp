#include <iostream>

using namespace std;

char mytolower(char c){
    int x = int(c);
    if(x <= 90 && x >= 65){
        x += 32;
    }
    return char(x);
}

bool same(char c1, char c2){
    char t1 = mytolower(c1);
    char t2 = mytolower(c2);
    return t1 == t2;
} 

bool valid(string a, string b){
    bool result = true;
    for(int i = 0; i < a.size(); ++i){
        if(!same(a[i], b[i])){
            result = false;
            break;
        }
    }
    return result;
}

int main(){

    string a, b;
    cin >> a >> b;

    if(valid(a,b)) cout << "Valid";
    else cout << "Invalid";

    return 0;
}
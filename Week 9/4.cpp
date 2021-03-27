#include <iostream>

using namespace std;


bool same(char c1, char c2){
    char t1 = tolower(c1);
    char t2 = tolower(c2);
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
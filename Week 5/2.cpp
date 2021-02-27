#include <iostream>

using namespace std;

int main(){

    string s;

    cin >> s;

    int digits[10];

    for(int i = 0; i <=9; ++i){
        digits[i] = 0;
    }

    for(int i = 0; i < s.length(); ++i){
        int digit_value = int(s[i]) - 48;
        digits[digit_value]++;
    }

    bool same = true;
    int mx = digits[0];

    for(int i = 1; i <= 9; ++i){
        if(mx < digits[i]){
            if(mx == 0){
                mx = digits[i];
            }else{
                same = false;
                break;
            }
        }
    }

    if(same){
        cout << "YES";
    }else{
        cout << "NO";
    }



    return 0;
}
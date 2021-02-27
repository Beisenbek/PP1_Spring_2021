#include <iostream>

using namespace std; 

int main(){ 

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int m = (n * (n - 1))/2;
    int b[m];

    int place = 0;

    for(int i = 0; i < n - 1; ++i){
        for(int j = i + 1; j < n; ++j){
            b[place] = a[i] + a[j];
            place++;
        }
    }

    int k;
    cin >> k;
    int c[k];

    for(int i = 0; i < k; ++i){
        cin >> c[i];
    }

    bool found = false;

    for(int i = 0; i < m; ++i){
        for(int j = 0; j < k; ++j){
            if(b[i] == c[j]){
                found = true;
                break;
            }
        }
        if(found){
            break;
        }
    }

    if(found){
        cout << "YES" << endl;
    }else{
        cout << "NO";
    }

    return 0; 
}
#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int b[n];
    int m = 0;

    for(int i = 0; i < n; ++i){
        bool isDuplicate = false;
        for(int j = i + 1; j < n; ++j){
            if(a[i] == a[j]){
                isDuplicate = true;
                break;
            }
        }
        if(isDuplicate == false){
           b[m] = a[i];   
           m++;  
        }
    }

    cout << m << endl;

    for(int i = 0; i < m; ++i){
        cout << b[i] << " ";
    }



    return 0;
}
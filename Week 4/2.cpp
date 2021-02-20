#include <iostream>

using namespace std;

int main(){


    int n;
    cin >> n;

    int m = 2 * n - 1;
    char a[n][m];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            a[i][j] = '.';
        }
    }


    int col = n - 1;

    for(int i = 0; i < n; ++i){
        for(int j = col; j < m - col; ++j){
            a[i][j] = '*';
        }     
        col--;      
    }   

    
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cout << a[i][j];
        }
        cout << endl;
    }
    

    return 0;
}
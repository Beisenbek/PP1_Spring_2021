#include <iostream>

using namespace std;

int main(){


    int n;
    cin >> n;

    int a[n][n];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            a[i][j] = -1;
        }
    }

    int t[2 * n - 1];
 
    t[0] = n - 1;
    int k = 1;

    for(int i = n - 1; i >= 1; --i){
        for(int j = 0; j < 2; ++j){
            t[k++] = i;
        }
    }

    int dr[] = {0, 1, 0, -1};
    int dc[] = {1, 0, -1, 0};

    int r = 0;
    int c = 0;
    int index = 0;

    a[r][c] = 1;
    int cnt = 1;

    for(int i = 0; i < k; ++i){
        int steps = t[i];
        for(int j = 0; j < steps; ++j){
            cnt++;
            r = r + dr[index];
            c = c + dc[index];
            a[r][c] = cnt;
        }
        index = (index + 1) % 4;
    }
    
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}
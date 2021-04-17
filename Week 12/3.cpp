#include <iostream>
#include <algorithm>


using namespace std;

int main(){


    int cnt = 10;

    int a[cnt];

    fill(a + 1, a + 3, 2);

    for(int i = 0; i < cnt; ++i){
        cout << a[i] << " ";
    }


    return 0;
}
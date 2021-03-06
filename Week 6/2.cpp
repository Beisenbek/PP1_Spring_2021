#include <iostream>

using namespace std;

int apb(int a, int b);
void f(int x);

void f(int x){
    cout << x << endl;
}

int apb(int a, int b){
    int c = a + b;
    f(c);
    return c;
}




int main(){


    f(apb(2, 3));


    return 0;
}
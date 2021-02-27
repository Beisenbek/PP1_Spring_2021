#include <iostream>

using namespace std; 

int main(){ 
   
    int n, x, cnt = 0;
    cin >> n;
    
    label1:
    n = n - 1;
    cin >> x;
    
    
    label2:
    if(x > 0){
        if(x % 10 == 0) cnt++;
        x = x / 10;
        goto label2;
    }


    if(n > 0) 
        goto label1;
    else 
        cout << cnt << endl;

    return 0; 
}
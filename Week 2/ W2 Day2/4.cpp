#include <iostream>

using namespace std; 

int main(){ 
   
    int i = 0;

    for(;;){
        if(i >= 10) break;
        cout << i << " ";
        i = i  + 1;
    }

    return 0; 
}
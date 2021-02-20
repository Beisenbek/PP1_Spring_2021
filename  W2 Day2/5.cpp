#include <iostream>

using namespace std; 

int main(){ 

    for(int i = 0; i < 10; i+=1){
        if(i % 2 == 1) continue;
        cout << i << " ";
    }

    return 0; 
}
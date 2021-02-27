#include <iostream>

using namespace std; 

int main(){ 
   
   int n;
   cin >> n;

    bool exp1 = (n % 4 == 0);
    bool exp2 = (n % 100 != 0);
    bool exp3 = (n % 400 == 0);


    if(exp1 == true && exp2 == true){
       cout << "YES";
    }else{
        if(exp3 == true){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    

    return 0; 
}
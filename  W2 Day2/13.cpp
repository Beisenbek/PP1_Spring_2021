#include <iostream>

using namespace std; 

int main(){ 

    string name, password;
    
    cout << "please enter credentials:" << endl;
    cin >> name >> password; 

    while(name != "user" && password != "123"){
       cout << "please enter credentials:" << endl;
       cin >> name >> password;
    }


    return 0; 
}
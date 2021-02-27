#include <iostream>

using namespace std; 

int main(){ 

    string name, password;

    do{
       cout << "please enter credentials:" << endl;
       cin >> name >> password;
    }while(name != "user" && password != "123");


    return 0; 
}
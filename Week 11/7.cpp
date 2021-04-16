#include <iostream>


using namespace std;

bool f(string str){
    return (str.size() > 4);
}

int main(){


    string fruits[] = {"apple","banana","kiwi"};

    int x = count_if(fruits, fruits + 3, f);
    cout << x << endl;
    

    return 0;
}
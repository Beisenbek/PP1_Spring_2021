#include <iostream>

using namespace std;

int solve(int result){
    int x;
    cin >> x;
    if(x == 0) return result;
    return solve(result + x);//tail recursion
}

 
int main(){

    cout << solve(0) << endl;
    
    return 0;
}

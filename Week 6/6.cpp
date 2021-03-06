#include <iostream>

using namespace std;


bool isValueAppearedPrevious(int pos, int * a, int n){
    bool result = false;
    for(int i = pos - 1; i >= 0; --i){
        if(a[i] == a[pos]){
            result = true;
            break;
        }
    }
    return result;
}

int countSimilarValuesInArray(int val, int * someArray, int n){
    int result = 0;
    for(int i = 0; i < n; ++i){
        if(someArray[i] == val){
            result++;
        }
    }
    return result;
}

int countOfEqualsInArrays(int * a, int * b, int n){
    int result = 0;
    
    for(int i = 0; i < n; ++i){
        if(!isValueAppearedPrevious(i, a, n)){
            result += countSimilarValuesInArray(a[i], b, n);
        }
    }

    return result;
}

void readArray(int someArray[], int n){
    for(int i = 0; i < n; ++i){
        cin >> someArray[i];
    }
}

int main(){

    int n;
    cin >> n;
    int a[n], b[n];

    readArray(a, n);
    readArray(b, n);


    cout << countOfEqualsInArrays(a, b, n) << endl;
   

    return 0;
}
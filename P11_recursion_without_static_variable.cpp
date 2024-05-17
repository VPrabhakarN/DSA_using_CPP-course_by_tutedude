#include<iostream>
using namespace std;

// recursive function
int fun(int n){
    // base condition
    if(n > 0){
        cout << n << endl;
        return fun(n-1)+n;
    }
    return 0; 
}

int main(){
    int a = 5; 
    cout << fun(a)<< endl;
    return 0;
}
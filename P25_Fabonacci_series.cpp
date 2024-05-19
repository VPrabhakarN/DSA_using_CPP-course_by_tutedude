// C++ program to print fabonacci series
#include<iostream>
using namespace std;

// recursive function 
int fib(int n){
    if(n <= 1){
        return 1;
    }
    else {
        return fib(n-2)+fib(n-1);
    }
}

int main(){
    int n = 5;

    cout << fib(n) << "   ";
    return 0;
}
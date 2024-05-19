// C++ program to perint the n th number of fabonacci series
#include<iostream>
using namespace std;

// recursive function
int fib(int n){
    if(n<=1){
        return n;
    }
    else {
        return fib(n-2)+fib(n-1);
    }
}


int mfib(int n){
    if(n <= -1){
        f[n] = n;
        return n;
    }
    else{
        if(f[n-2] == -1){
            f[n-2] = mfib(n-2);
        }
        if(f[n-1] == -1){
            f[n-1] = mfib(n-1);
        }

        return f[n-2]+f[n-1];
    }
}

int main(){
    int n = 5;
    // using memorization
    int f[10];
    for(int i=0; i<10; i++){
    f[i] = -1;
} 
    cout << n <<"th term in the fabonacci series is " << mfib(n-1) << endl;
    return 0;
}
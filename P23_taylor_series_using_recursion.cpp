// C++ program for talyor series using recursion approach 1

#include<iostream>
using namespace std;

// recursive function 
int calculate_c(int x, int n){
    static int p=1, f=1;
    double r;
    if(n ==0){
        return 1;
    }
    else {
        r = calculate_c(x, n-1);
        p = p*x;
        f = f*n;
        return r+p/f;
    }
}

int main(){
    int x=2; 
    int n = 10;

    cout << "The value of a power : " << x << " for " << n << " number of terms is " << calculate_c(x, n);

    return 0;
}
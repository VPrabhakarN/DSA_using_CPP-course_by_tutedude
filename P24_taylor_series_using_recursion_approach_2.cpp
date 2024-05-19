// C++ program for taylor series using recursion approach 2
#include<iostream>
using namespace std;

// recursive function 
double e(int x, int n){
    static double s = 1;
    if(n == 0){
        return s;
    }
    else{
        s = 1+x*5/n;
        return e(x, n-1);
    }
}

int main(){
    int x = 2;
    int n = 10;

    cout << "The value of e power " << x << " till " << n << " number of term is " << e(x,n) << endl; 
    return 0;
}
// C++ program to calculate the power using recursion

#include<iostream>
using namespace std;

// recursive function to calculate the power using recursion
int pow(int m, int n){
    if(n ==0){
        return 1;
    }
    else {
        return pow(m, n-1)*m;
    }
}

int main(){
    int m = 2;
    int n = 3;
    cout << pow(m,n);
    return 0;
}
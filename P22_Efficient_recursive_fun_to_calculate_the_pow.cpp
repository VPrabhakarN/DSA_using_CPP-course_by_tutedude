// C++ program to calculate the power using efficient recurive function

#include<iostream>
using namespace std;

// recursive function 
int pow(int m, int n){
    if(n == 0){
        return 1;
    }
    if(n%2 == 0){
        return pow(m*m, n/2);
    }
    else {
        return m*pow(m*m, (n-1)/2);
    }
}

int main(){
    int m = 2;
    int n = 6;
    cout << pow(m,n) << endl;
    return 0;
}
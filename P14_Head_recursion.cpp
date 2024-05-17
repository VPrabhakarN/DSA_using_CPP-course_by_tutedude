// C++ program to demonstrate the head recursion function 

#include<iostream>
using namespace std;

// haid recursive function
void fun(int n){
    if(n>0){
        fun(n-1);
        cout << n << endl;
    }
}

int main(){
    fun(3);
    return 0;
}

// Ascending Phase 
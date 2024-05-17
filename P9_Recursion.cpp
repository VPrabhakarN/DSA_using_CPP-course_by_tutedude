// C++ program to demonstrate the recursion 

#include<iostream>
using namespace std;

// defining a function
void fun1(int n){
    if(n > 0){
        cout << n << endl;
    }
    fun1(n-1);
}

int main(){

    int x = 5;
    fun1(x);
    return 0;
}
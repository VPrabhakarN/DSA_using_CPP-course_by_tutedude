// C++ program to demonstrate the tail recursion

#include<iostream>
using namespace std;

// tail recursive function
void fun(int n){
    if(n>0){
        cout << n << endl;
        fun(n-1);
    }
}

int main(){

    fun(3);
    return 0;
}

// Decending Phase
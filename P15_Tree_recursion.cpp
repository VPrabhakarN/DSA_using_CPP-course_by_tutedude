// C++ program to demonstrate the tree recursion function

#include<iostream>
using namespace std;

// tree recursive function
void fun(int n){
    if(n>0){
        cout << n << endl;
        fun(n-1);
        fun(n-1);
    }
}

int main(){
    fun(3);
    return 0;
}
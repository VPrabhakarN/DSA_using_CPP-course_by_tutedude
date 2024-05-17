// C++ program to demonstrate the recursion  

#include<iostream>
using namespace std;

// defining a function
void display(int n){
    if(n > 0){
        cout << n << " ";
        display(n-1);
    }
}

int main(){
    int num = 10;

    // calling a function
    display(num);

    return 0;
}
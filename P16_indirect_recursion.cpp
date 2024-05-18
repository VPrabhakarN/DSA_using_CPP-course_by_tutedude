// C++ program to demonstrate the indirect recursion

#include<iostream>
using namespace std;

void  funA(int n);
void funB(int n);

// indirect recursive function 1
void funA(int n){
    if(n > 0){
        cout << n << endl;
        funB(n-1);
    }
}

// indirect recursive function 2
void funB(int n){
    if(n > 1){
        cout << n << endl;
        funA(n/2); 
    }
}

int main(){
    int a = 20;
    funA(a);

    return 0;
}
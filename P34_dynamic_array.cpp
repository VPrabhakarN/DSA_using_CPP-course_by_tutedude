// C++ program to demonstrate the dynamic array
#include<iostream>
using namespace std;

int main(){
    // defining a pointer 
    int *p;

    // defining an dynamic array 
    p = new int[5];
    p[0] = 1;
    p[1] = 2;
    p[1] = 3;
    p[1] = 4;
    p[1] = 5;

    // accessing the array element 
    cout << "A : " << p[0] << endl;
    return 0;
}
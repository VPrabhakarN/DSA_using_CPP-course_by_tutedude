// C++ program to demonstrate the 2D array using method 3
#include<iostream>
using namespace std;

int main(){
    // defining a 2d array using pointer 
    int **a[2];
    a = new int*[2];
    a[0] = new int[3];
    a[1] = new int[3];

    cout << "This is an example of the 2D array using method 3";
    return 0;
}
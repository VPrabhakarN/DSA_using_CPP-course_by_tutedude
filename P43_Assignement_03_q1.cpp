// Q.1) -> Write a program using dynamic array to find sum of all numbers in array.

#include<iostream>
using namespace std;

int main(){
    // defining dynamic array 
    int *p = new int[5];

    // initilizing the values
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;

    // displaying the array 
    cout << "Array : ";
    for(int i=0; i<5; i++){
        cout << p[i] << " ";
    }
    int sum = 0;
    // calculate the sum of all elements present in the array 
    for(int i=0; i<5; i++){
        sum = sum + p[i];
    }

    cout << "\nSum : " << sum << endl;

    // deleting allocation
    delete p;
    return 0;
}
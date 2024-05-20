// C++ program to demonstrate the array and increase the size of an array 
#include<iostream>
using namespace std;

int main(){
    // defining an array 
    int *p;
    p = new int[5];

    // putting value in the array 
    for(int i=0; i<5; i++){
        p[i] = 10;
    }

    // traversing an array 
    cout << "P : ";
    for(int i=0; i<5; i++){
        cout << p[i] << " ";
    }

    // now create another array with big size and copy existing array 
    int *q;
    q = new int[6];

    // copyinng the elements from array p into q
    for(int i=0; i<5; i++){
    q[i] = p[i];
    }

    q[5] = 20;

    // traversing an array q
    cout << "\nQ : ";
    for(int i=0; i<6; i++){
        cout << q[i] << " ";
    }

    return 0;
}

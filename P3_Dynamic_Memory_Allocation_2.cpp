// C++ program to allocate dynamic memory using 'New keyword', 'Delete keyword', 'Memory leak'

#include<iostream>
using namespace std;
int main(){
    int *ptr;
    ptr = new int[5];

    delete ptr[];
    ptr = NULL;
    return 0;
}
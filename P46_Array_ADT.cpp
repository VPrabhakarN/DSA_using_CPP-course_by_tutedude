// C++ program to demonstrate the array ADT and perform it's operations
#include<iostream>
using namespace std;

class Array{
    private :
    int *A;
    int size;
    int length;

    public :
    Array(int size){
        this->size = size;
        A = new int[size];
    }

    // create method
    void create(){
        length = 5;
        for(int i=0; i<length; i++){
            A[i] = 10;
        }
    }

    // display method
    void display(){
        cout << "The array : ";
        for(int i=0; i<length; i++){
            cout << A[i] << " ";
        }
        cout << endl;
    }

    // destructor
    ~Array(){
        delete[] A;
        cout << "The array is distroyed..";
    }
};

int main(){
    Array array1(10);
    array1.create();
    array1.display();
    return 0;
}
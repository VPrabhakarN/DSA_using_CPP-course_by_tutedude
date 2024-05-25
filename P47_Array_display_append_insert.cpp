// C++ program to demonstrate array ATD and perform operations 
#include<iostream>
using namespace std;

// Structure 
struct Array{
    int A[10];
    int size;
    int length;
};

// display function
void display(struct Array arr){
    cout << "The array : ";
    for(int i=0; i<arr.length; i++){
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

// append function
void append(struct Array * arr, int x){
    if(arr-> length < arr-> size){
        arr -> A[arr->length] = x;
        arr -> length++;
    }
}

// insert function 
void insert(struct Array *arr, int index, int x){
    if(index >=0 && index <arr->length){
        for(int i=arr->length; i>index; i--){
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}

int main(){
    struct Array arr1 = {{1,2,3,4,5}, 10, 5};
    cout << "The initial array ";
    display(arr1);

    // call append 
    cout << "After append ";
    append(&arr1, 6);
    display(arr1);
    cout << endl;

    // call insert
    insert(&arr1, 0, 7);
    display(arr1);

    return 0;
}
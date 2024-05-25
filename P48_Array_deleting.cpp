// C++ program to demonstrate the array and delete from the array 
#include<iostream>
using namespace std;

// struct 
struct Array{
    int A[10];
    int size;
    int length;
};

// display function
void display(struct Array arr){
    for(int i=0; i<arr.length; i++){
        cout << arr.A[i]<<" ";
    }
    cout << endl;
}

int delet(struct Array *arr, int index){
    int x = 0;
    int i;
    if(index >= 0 && index <arr->length){
        x = arr->A[index];
        for(i=index; i<arr->length; i++){
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
        return 0;
    }
    else {
        return 0;
    }
}

int main(){
    struct Array arr1 = {{1,2,3,4,5}, 10};
    cout <<"The deleted element is : " << delet(&arr1, 1);
    display(arr1);
    return 0;
}
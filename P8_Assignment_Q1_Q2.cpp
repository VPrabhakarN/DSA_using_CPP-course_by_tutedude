// Q.2) -> write a program in  c++ using concept of dynamic memory allocation to find sum of numbers present in an array.

#include<iostream>
using namespace std;

int main(){
    int n;

    // taking the size of an array from the user 
    cout << "Enter the size of an array : ";
    cin >> n;

    // defining an array of 'n' size
    int* arr = new int[n];

    // checking if dynamic allocation is successfull or not
    if(arr == nullptr){
        cout << "Dynamic allocation is failed...." << endl;
        return 1;
    }

    // taking elements from the user 
    cout << "Enter " << n << " elements in the array : " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // calculating the sum of the element of the array 
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    cout << "The sum of all elements of an array : " << sum << endl;

    // free the dynamically allocated memory
    delete[] arr;

    return 0;
}
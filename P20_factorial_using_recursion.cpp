// C++ program to calculate the factorial using recursion

#include<iostream>
using namespace std;

// recursive function for calculating the factorial 
int fact(int n){
    if(n == 0){
        return 1;
    }
    else {
        return fact(n-1)*n;
    }
}

int main(){
    int num;

    // taking input from the user 
    cout << "Enter the number : ";
    cin >> num;

    // calling function 
    cout << "The factorial : " << fact(num) << endl;

    return 0;
}
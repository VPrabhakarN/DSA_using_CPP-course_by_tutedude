// C++ program to calculate the sum of natural numbers using direct formula 

#include<iostream>
using namespace std;

int main(){
    // taking the input from the user 
    int num;
    cout << "Enter the number : ";
    cin >> num;

    // using direct formula 
    int sum = num*(num+1)/2;
    cout << "The sum of natural number from 1 to " << num << " is : " << sum << endl;

    return 0;
}
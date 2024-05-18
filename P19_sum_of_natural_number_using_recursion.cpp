// C++ program to calculate the sum of natural number using recursion

#include<iostream>
using namespace std;

// recursive function for calculate the sum of natural numbers
int sum(int n){
    if(n == 0){
        return 0;
    }
    else {
        return sum(n-1) + n;
    }
}

int main(){
    int num;
    cout << "Enter the number : ";
    cin >> num ;

    // callig function 
    cout << "The sum of natural number from 1 to " << num << " is : " << sum(num) << endl;

    return 0;
}
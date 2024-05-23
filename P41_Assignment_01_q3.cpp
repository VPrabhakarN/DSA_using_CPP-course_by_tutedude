// Q.3) -> Write a recursive function that takes a number and returns the sum of all the numbers from zero to that number.
#include<iostream>
using namespace std;

// recursive fucntion 
int sum(int n){
    if(n==0){
        return 0;
    }
    else {
        return sum(n-1)+n;
    }
}

int main(){
    int num = 5;
    cout << "The sum : " << sum(num)<< endl;
    return 0;
}
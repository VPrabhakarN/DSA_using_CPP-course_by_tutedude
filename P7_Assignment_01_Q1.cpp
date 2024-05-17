// Q.1) -> write an algorithm to check check weather a number is prime or not. also find it's Time complexity

#include<iostream>
using namespace std;

int main(){
    int num;
    bool is_prime = true;

    // taking input from the user 
    cout << "Enter the number : " ;
    cin >> num;

    // 0 and 1 are not prime number 
    if(num == 0 || num == 1){
        is_prime = false;
    }

    // using for loop 
    for(int i=2; i<num/2; ++i){
        if(num%i == 0){
            is_prime = false;
            break;
        }
    }

    if(is_prime){
        cout << num << " is a prime number." << endl;
    }
    else {
        cout << num << " is not a prime number." << endl;
    }
}

// Total number of cout = num / 2 / 2
// time complexity is O(n) and space complexity is O()
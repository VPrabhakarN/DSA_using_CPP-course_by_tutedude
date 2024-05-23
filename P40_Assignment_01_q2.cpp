// Q.2) -> Write an Example program showing tail recursion
#include<iostream>
using namespace std;

// tail recursive method 
void tail(int n){
    if(n > 0){
        cout << n << endl;
        tail(n-1);
    }
}

int main(){
    int a = 3;
    tail(a);
    return 0;
}
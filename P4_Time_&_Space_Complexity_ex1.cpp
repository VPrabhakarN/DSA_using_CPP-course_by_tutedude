// C++ program to define the time complexity and the space complexity 

#include<iostream>
using namespace std;

void swap(int n1, int n2){
    int t;
    t = n1;
    n1 = n2;
    n2 = t;
}

int main(){
    int n, m;
    swap(n,m);
    return 0;
}

// Total time taken = 3 units 
// Time complexity = O(1) or constant
// Space complexity = O(1)
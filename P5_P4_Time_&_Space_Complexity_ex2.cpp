// C++ program to define the time complexity and space complexity 

#include<iostream>
using namespace std;

int sum(int a[], int n){
    int s, l;
    s = 0;
    for(int i=0; i<n; i++){
        s = s+a[i];
    }

    return s;
}

int main(){

    return 0;
}

// Total time taken = 1 + n
// Time complexity = O(n)
// Space complexity = O(n)
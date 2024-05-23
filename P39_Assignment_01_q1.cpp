// Q.1) -> write an example program showing head recursion.
#include<iostream>
using namespace std;

// head recursive function 
void head(int n){
    if(n > 0){
        head(n-1);
        cout << n << endl;
    }
}
int main(){
    int a = 3;
    head(a);

    return 0;
}
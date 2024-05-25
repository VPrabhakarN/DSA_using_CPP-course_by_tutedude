// Q.3) -> Given an array arr[1………10][1………15] with base value 100 and the size of each element is 1 Byte in memory find the address of arr[8][6] with the help of column-major order.

#include<iostream>
using namespace std;

// function 
void target(int ba, int _i, int _j, int _m, int w){
    int first_step = _j * _m + _i;
    int second_step = first_step * w;
    int ans = ba + second_step;

    cout << "ARR[8][6] : " << ans << endl; 
}

int main(){
    int ba = 100;
    int _i = 8;
    int _j = 6;
    int _m = 10;
    int w = 1;

    target(ba, _i, _j, _m, w);
    return 0;
}
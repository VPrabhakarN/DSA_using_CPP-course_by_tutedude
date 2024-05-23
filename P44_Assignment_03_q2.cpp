// Q.2) -> Given the base address of an array A[1300…………1900] as 1020 and the size of each element is 2 bytes in the memory, find the address of A[1700]? 

#include<iostream> 
using namespace std;

// defining a function 
void find(int ba, int si, int ri, int s){
    int first_part, second_part, third_part;

    first_part = ri - si;
    second_part = first_part * s;
    third_part = ba + second_part;

    cout << "A[1700] : "<< third_part << endl;
}
int main(){

    int base_address = 1020;
    int start_index = 1300;
    int require_index = 1700;
    int size_of_dt = 2;

    find(base_address, start_index, require_index, size_of_dt);
    return 0;
}
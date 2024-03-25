#include <iostream>
using namespace std;

void increment(int *pointer){
    *pointer = *pointer + 1;
}

int main(){
    int num = 10;
    // int *ptr;
    // ptr = &num;
    // cout<<*ptr<<endl;
    increment(&num);
    cout<<num;
}

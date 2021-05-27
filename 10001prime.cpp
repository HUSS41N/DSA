// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

// What is the 10 001st prime number?
#include <iostream>
using namespace std;
bool isPrime(int num){
    for(int i=2;i<num;i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int counter = 0;
    int i=1;
    int prime = 0;
    while(counter<=1000191){
        if(isPrime(i)==true){
            counter++;
            prime = i;
        }
        i++;
    }
    cout<<prime;
}

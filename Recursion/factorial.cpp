#include <iostream>

using namespace std;
int factorial(int num){
    if(num==0){
        return 1;
    }
    int fact = factorial(num-1);
    return num*fact;
}
int main(){
    int num;
    cin>>num;
    cout<<factorial(num);
}

#include <iostream>
using namespace std;

int printNumDec(int num){
    if(num==0){
        return 0;
    }
    cout<<num<<" ";
    printNumDec(num-1);
}

int printNumInc(int num){
    if(num==0){
        return 0;
    }
    printNumInc(num-1);
    cout<<num<<" ";
    
}
int main()
{   int num;
    cin>>num;
    printNumInc(num);
}






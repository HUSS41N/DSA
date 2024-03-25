#include <iostream>
using namespace std;

int main(){
    for(int i=1;i<=100;i++){
        if(!(i & 1)){
            cout<<i<<" ";
        }
    }
    for(int i=1;i<=100;i++){
        if(i & 1){
            cout<<i<<" ";
        }
    }
}

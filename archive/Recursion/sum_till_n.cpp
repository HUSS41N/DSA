#include <iostream>

using namespace std;
int sum(int num){
    if(num==0){
        return 0;
    }
    int prev = sum(num-1);
    return prev+num;
}

int main(){
    int num;
    cin>>num;
    cout<<sum(num);
}

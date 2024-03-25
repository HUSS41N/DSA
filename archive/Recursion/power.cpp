#include <iostream>

using namespace std;
int power(int num,int pwr){
    if(pwr==0){
        return 1;
    }
    int prev_power = power(num,pwr-1);
    return prev_power * num;
}
int main(){
    int num,pwr;
    cin>>num>>pwr;
    cout<<power(num,pwr);
}

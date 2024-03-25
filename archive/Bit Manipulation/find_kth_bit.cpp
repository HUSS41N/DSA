#include <iostream>
using namespace std;
void bin(unsigned n)
{
    if (n > 1)
        bin(n / 2);
    cout << n % 2;
}
int main(){
    int n,i;
    cin>>n>>i;
    int mask = 1 << i-1;
    n = n & mask;
    if(n){
        cout<<1;
    } else {
        cout<<0;
    }
    
}

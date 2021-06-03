#include <iostream>
#include <math.h>
using namespace std;
// with math.h
// bool isPerfectSquare(int num){
//     int sr = sqrt(num);
//     if(sr*sr == num){
//         return true;
//     }
//     return false;
// }
bool isPerfectSquare(int n)
{
    for (int i = 1; i * i <= n; i++) {
        if ((n % i == 0) && (n / i == i)) {
            return true;
        }
    }
    return false;
}
int main(){
  int num;
  cin>>num;
  cout<<isPerfectSquare(num);
}

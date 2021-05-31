#include <iostream>
using namespace std;

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

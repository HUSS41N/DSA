#include <iostream>
using namespace std;
int main() {
  int num;
  cin>>num;
  int copy = num;
  int cube=0;
  while(num>0){
      int last_digit = num % 10;
      cube += last_digit*last_digit*last_digit;
      num /= 10;
  }
  if(cube == copy){
      cout<<"Armstrong number";
  } else{
      cout<<"Not Armstrong number";
  }
}

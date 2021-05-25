#include <iostream>
using namespace std;
int main() {
  int num = 10001;
  int copy = num;
  int toBeAdded = 0;
  int decimal_place = 1;
  if(num==0){
        toBeAdded+= decimal_place*5;
  }
  while(num>0){
      if(num%10==0){
          toBeAdded+= decimal_place*5;
      }
      num /= 10;
      decimal_place *= 10;
  }
  cout<<toBeAdded+copy;
}

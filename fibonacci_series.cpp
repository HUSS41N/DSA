#include <iostream>
using namespace std;

int main() {
  int num;
  cin>>num;
  int first = 0;
  int second = 1;
  int next;
  for(int i=0;i<=num;i++){
      cout<<first<<" ";
      next = first + second;
      first = second;
      second = next;
  }
}

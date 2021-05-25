#include <iostream>
using namespace std;
bool prime_number(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main() {
  int range;
  cin>>range;
  for(int i=1;i<=range;i++){
      if(prime_number(i)==true){
          cout<<i<<endl;
      }
  }
}

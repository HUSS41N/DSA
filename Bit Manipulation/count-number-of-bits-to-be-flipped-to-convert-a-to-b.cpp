#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cin>>num1>>num2;
    int mask = num1^num2;
    int counter = 0;
    while(mask>0){
        mask = mask & (mask - 1);
        counter++;
    }
    cout<<counter;
}

// #include <iostream>
// using namespace std;
// int main(){
//     int num1,num2;
//     cin>>num1>>num2;
//     int mask = num1^num2;
//     int counter = 0;
//     while(mask>0){
//         mask = mask>>1;
//         if(mask){
//             counter++;
//         }
//     }
//     cout<<counter;
// }

// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/long-atm-queue-3/
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int counter = 1;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
           counter++;
        } 
    }
    cout<<counter;
}

// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/min-max-8/
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0],min=arr[0],sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        } else if(arr[i]<min){
            min = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        sum+= arr[i];
    }
    cout<<sum-max<<" "<<sum-min;
}
